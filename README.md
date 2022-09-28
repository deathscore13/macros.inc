# Macros
### Макросы для SourceMod 1.7+<br><br>

Содержит сокращения для: хранения 32 значений `bool` в одной переменной, использования массива как буфер, оптимизации многомерных массивов (2-6) и токенов (стабильно работает только в **spcomp_mod**)<br><br>
**НЕ ИСПОЛЬЗУЙТЕ** макросы для многомерных массивов, если индекс не является константой, т.к. в таком случае вычисления будут происходить при выполнении, а не компиляции

<br><br>
## Пример хранения 32-х значений `bool` в одной переменной
**`main.sp`**
```sp
// чтобы не запутаться используем имена вместо цифр (диапазон: 0-31)
#define ONE 0
#define TWO 1

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
}
```

<br><br>
## Пример использования массива как буфер
**`main.sp`**
```sp
public void OnPluginStart()
{
    // объявление массива
    char buffer[32];
    
    // вместо buffer, sizeof(buffer) используем sz(buffer)
    strcopy(sz(buffer), "test");
    
    // вывод значения
    PrintToServer(buffer);
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
