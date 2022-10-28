# Macros
### Макросы для SourceMod 1.7+<br><br>

Содержит сокращения для: хранения 32 значений `bool` в одной переменной, хранение более 32 значений `bool` в массиве, использования массива как буфер, оптимизации многомерных массивов (2-6) и токенов (стабильно работает только в **spcomp_mod**)<br><br>
**НЕ ИСПОЛЬЗУЙТЕ** макросы для оптимизации многомерных массивов, если индекс не является константой, т.к. в таком случае вычисления будут происходить при выполнении, а не компиляции

<br><br>
## Пример хранения 32-х значений `bool` в одной переменной
**`main.sp`**
```sp
// чтобы не запутаться используем имена вместо цифр (диапазон: 0-31)
#define ONE 0
#define TWO 1

// объявление переменной. может быть записано в бд как int
bool bVar1;

public void OnPluginStart()
{
    // присваивание ONE значение true
    bTRUE(bVar1, ONE);
    
    // присваивание TWO значение true
    bTRUE(bVar1, TWO);
    
    // любое не 0 значение считается за true, но если нужен 1, то необходимо использовать !! перед bGET()
    PrintToServer("%b | %b | %b", bVar1, bGET(bVar1, TWO), !!bGET(bVar1, TWO));
    
    // присваивание ONE значение false
    bFALSE(bVar1, ONE);
    
    // проверка зануления ONE
    PrintToServer("%b | %b", bVar1, bGET(bVar1, ONE));
    
    // создание переменной с значением true (не 0)
    int var1 = 123;
    
    // присваивание ONE значение var1
    bSET(bVar1, ONE, var1);
    
    // проверка установленных значений
    PrintToServer("%b | %b", bVar1, bGET(bVar1, ONE));
}
```

<br><br>
## Пример хранения более 32-х значений `bool` в массиве
**`main.sp`**
```sp
// чтобы не запутаться используем имена вместо цифр
#define ONE 32
#define TWO 33
#define MAX 34

// объявление переменной. может быть записано в бд как char[(MAX / 32 + 1) * 4]; MAX / 32 округлён к меньшему
bool bCREATE_EX(bVar1, MAX);

public void OnPluginStart()
{
    // присваивание ONE значение true
    bTRUE_EX(bVar1, ONE);
    
    // присваивание TWO значение true
    bTRUE_EX(bVar1, TWO);
    
    // любое не 0 значение считается за true, но если нужен 1, то необходимо использовать !! перед bGET_EX()
    PrintToServer("%b | %b | %b", bVar1[1], bGET_EX(bVar1, TWO), !!bGET_EX(bVar1, TWO));
    
    // присваивание ONE значение false
    bFALSE_EX(bVar1, ONE);
    
    // проверка зануления ONE
    PrintToServer("%b | %b", bVar1[1], bGET_EX(bVar1, ONE));
    
    // создание переменной с значением true (не 0)
    int var1 = 123;
    
    // присваивание ONE значение var1
    bSET_EX(bVar1, ONE, var1);
    
    // проверка установленных значений
    PrintToServer("%b | %b", bVar1[1], bGET_EX(bVar1, ONE));
}
```

<br><br>
## Пример использования массива как буфер
**`main.sp`**
```sp
// кроме szN есть ещё szlenN. разница лишь в том, что szlen преобразует в buffer, strlen(buffer)

public void OnPluginStart()
{
    // объявление массивов
    char buffer[32],
        buffer2[1][32],
        buffer3[1][1][32],
        buffer4[1][1][1][32],
        buffer5[1][1][1][1][32],
        buffer6[1][1][1][1][1][32];
    
    // вместо buffer, sizeof(buffer) используем sz(buffer)
    strcopy(sz(buffer), "test");
    
    // вывод значения
    PrintToServer(buffer);
    
    
    // вместо buffer2[0], sizeof(buffer2[]) используем sz2(buffer2, 0)
    strcopy(sz2(buffer2, 0), "test2");
    
    // вывод значения
    PrintToServer(buffer2[0]);
    
    
    // вместо buffer3[0][0], sizeof(buffer3[][]) используем sz3(buffer3, 0, 0)
    strcopy(sz3(buffer3, 0, 0), "test3");
    
    // вывод значения
    PrintToServer(buffer3[0][0]);
    
    
    // вместо buffer4[0][0][0], sizeof(buffer4[][][]) используем sz4(buffer4, 0, 0, 0)
    strcopy(sz4(buffer4, 0, 0, 0), "test4");
    
    // вывод значения
    PrintToServer(buffer4[0][0][0]);
    
    
    // вместо buffer5[0][0][0][0], sizeof(buffer5[][][][]) используем sz5(buffer5, 0, 0, 0, 0)
    strcopy(sz5(buffer5, 0, 0, 0, 0), "test5");
    
    // вывод значения
    PrintToServer(buffer5[0][0][0][0]);
    
    
    // вместо buffer6[0][0][0][0][0], sizeof(buffer6[][][][][]) используем sz6(buffer6, 0, 0, 0, 0, 0)
    strcopy(sz6(buffer6, 0, 0, 0, 0, 0), "test6");
    
    // вывод значения
    PrintToServer(buffer6[0][0][0][0][0]);
}
```

<br><br>
## Пример оптимизиции многомерных массивов
**`main.sp`**
```sp
// размер двумерного массива
#define SIZE2_1 2
#define SIZE2_2 32

// размер трёхмерного массива
#define SIZE3_1 2
#define SIZE3_2 2
#define SIZE3_3 32

// размер четырёхмерного массива
#define SIZE4_1 2
#define SIZE4_2 2
#define SIZE4_3 2
#define SIZE4_4 32

// размер пятимерного массива
#define SIZE5_1 2
#define SIZE5_2 2
#define SIZE5_3 2
#define SIZE5_4 2
#define SIZE5_5 32

// размер шестимерного массива
#define SIZE6_1 2
#define SIZE6_2 2
#define SIZE6_3 2
#define SIZE6_4 2
#define SIZE6_5 2
#define SIZE6_6 32

// объявление многомерных массивов
char ARR2_CREATE(arr2, SIZE2),
    ARR3_CREATE(arr3, SIZE3),
    ARR4_CREATE(arr4, SIZE4),
    ARR5_CREATE(arr5, SIZE5),
    ARR6_CREATE(arr6, SIZE6);

public void OnPluginStart()
{
    // запись в двумерный массив
    FormatEx(ARR2_WRITE(arr2, SIZE2, 0, 0), "test2");
    
    // чтение из двумерного массива
    PrintToServer("%s", ARR2_POS(arr2, SIZE2, 0, 0));
    
    
    // запись в трёхмерный массив
    FormatEx(ARR3_WRITE(arr3, SIZE3, 0, 0, 0), "test3");
    
    // чтение из трёхмерного массива
    PrintToServer("%s", ARR3_POS(arr3, SIZE3, 0, 0, 0));
    
    
    // запись в четырёхмерный массив
    FormatEx(ARR4_WRITE(arr4, SIZE4, 0, 0, 0, 0), "test4");
    
    // чтение из четырёхмерного массива
    PrintToServer("%s", ARR4_POS(arr4, SIZE4, 0, 0, 0, 0));
    
    
    // запись в пятимерный массив
    FormatEx(ARR5_WRITE(arr5, SIZE5, 0, 0, 0, 0, 0), "test5");
    
    // чтение из пятимерного массива
    PrintToServer("%s", ARR5_POS(arr5, SIZE5, 0, 0, 0, 0, 0));
    
    
    // запись в шестимерный массив
    FormatEx(ARR6_WRITE(arr6, SIZE6, 0, 0, 0, 0, 0, 0), "test6");
    
    // чтение из шестимерного массива
    PrintToServer("%s", ARR6_POS(arr6, SIZE6, 0, 0, 0, 0, 0, 0));
}
```

<br><br>
## Пример использования токенов (стабильно работает только в spcomp_mod)
**`main.sp`**
```sp
public void OnPluginStart()
{
    int var1;
    if (var1 == 1)
    {
        // ...
    }
    elseif (var1 == 2) // elseif вместо else if
    {
        // ...
    }
    elif (var1 == 3) // elif вместо else if
    {
        // ...
    }
}
```
