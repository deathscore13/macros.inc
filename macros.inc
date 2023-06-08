/**
 * macros.inc
 *
 * Макросы для SourceMod 1.7+
 * https://github.com/deathscore13/macros.inc
 */

#if defined _macros_included
 #endinput
#endif
#define _macros_included

#if !defined CHAR_BIT
#define CHAR_BIT 32     /**< Максимальное количество бит */
#endif

/**
 * Округление %0
 * 
 * @param %0        Значение для округления
 * @param %1        Делитель
 * 
 * @return          Округлённое число. Например 4 в ROUND_RESIDUE(1, 4) или 4 в ROUND_RESIDUE(4, 4)
 */
#define ROUND_RESIDUE(%0,%1) (%0 + ROUND_RESIDUE_EX(%0, %1))

/**
 * Нахождение числа для округления %0
 * 
 * @param %0        Значение для округления
 * @param %1        Делитель
 * 
 * @return          Число для округления. Например 3 в ROUND_RESIDUE_EX(1, 4) или 0 в ROUND_RESIDUE_EX(4, 4)
 */
#define ROUND_RESIDUE_EX(%0,%1) ((%1 - (%0 % %1)) % %1)

/**
 * Присваивает true переменной
 * 
 * @param %0        Имя переменной
 * @param %1        Позиция (0-31)
 */
#define bTRUE(%0,%1) view_as<int>(%0) |= 1 << (%1)

/**
 * Присваивает false переменной
 * 
 * @param %0        Имя переменной
 * @param %1        Позиция (0-31)
 */
#define bFALSE(%0,%1) view_as<int>(%0) &= ~(1 << (%1))

/**
 * Получение значения переменной
 * Для получения 1 при true, необходимо использовать !! перед bGET()
 * 
 * @param %0        Имя переменной
 * @param %1        Позиция (0-31)
 * 
 * @return          true или false
 */
#define bGET(%0,%1) (view_as<int>(%0) & 1 << (%1))

/**
 * Установка значения переменной
 * Если значение является константой, то используйте bTRUE/bFALSE
 * 
 * @param %0        Имя переменной
 * @param %1        Позиция (0-31)
 * @param %2        Переменная
 */
#define bSET(%0,%1,%2) view_as<int>(%0) = %2 ? view_as<int>(%0) | 1 << (%1) : view_as<int>(%0) & ~(1 << (%1))


/**
 * Создаёт переменную с более 32 позиций для записи
 * 
 * @param %0        Имя переменной
 * @param %1        Максимальное количество позиций
 */
#define bCREATE_EX(%0,%1) %0[(%1) / CHAR_BIT + 1]

/**
 * Присваивает true переменной
 * 
 * @param %0        Имя переменной
 * @param %1        Позиция (можно более 31)
 */
#define bTRUE_EX(%0,%1) view_as<int>(%0[(%1) / CHAR_BIT]) |= 1 << (%1)

/**
 * Присваивает false переменной
 * 
 * @param %0        Имя переменной
 * @param %1        Позиция (можно более 31)
 */
#define bFALSE_EX(%0,%1) view_as<int>(%0[(%1) / CHAR_BIT]) &= ~(1 << (%1))

/**
 * Получение значения переменной
 * Для получения 1 при true, необходимо использовать !! перед bGET()
 * 
 * @param %0        Имя переменной
 * @param %1        Позиция (можно более 31)
 * 
 * @return          true или false
 */
#define bGET_EX(%0,%1) (view_as<int>(%0[(%1) / CHAR_BIT]) & 1 << (%1))

/**
 * Установка значения переменной
 * Если значение является константой, то используйте bTRUE/bFALSE
 * 
 * @param %0        Имя переменной
 * @param %1        Позиция (можно более 31)
 * @param %2        Значение
 */
#define bSET_EX(%0,%1,%2) view_as<int>(%0[(%1) / CHAR_BIT]) = %2 ? view_as<int>(%0[(%1) / CHAR_BIT]) | 1 << (%1) : \
    view_as<int>(%0[(%1) / CHAR_BIT]) & ~(1 << (%1))


/**
 * Использование массива как буфер (имя переменной и размер)
 * 
 * @param %0        Имя переменной
 * ...              Индексы
 */
#define sz(%0) %0, sizeof(%0)
#define sz2(%0,%1) %0[%1], sizeof(%0[])
#define sz3(%0,%1,%2) %0[%1][%2], sizeof(%0[][])
#define sz4(%0,%1,%2,%3) %0[%1][%2][%3], sizeof(%0[][][])

/**
 * Использование массива как буфер (имя переменной и длина строки)
 * 
 * @param %0        Имя переменной
 * ...              Индексы
 */
#define szlen(%0) %0, strlen(%0)
#define szlen2(%0,%1) %0[%1], strlen(%0[%1])
#define szlen3(%0,%1,%2) %0[%1][%2], strlen(%0[%1][%2])
#define szlen4(%0,%1,%2,%3) %0[%1][%2][%3], strlen(%0[%1][%2][%3])


/**
 * Создание многомерного массива
 * 
 * @param %0        Имя переменной
 * @param %1        Префикс для размерности в #define
 *                  Пример:
 *                      #define SIZE2_1 2
 *                      #define SIZE2_2 32
 * 
 *                      char ARR2_CREATE(arr2, SIZE2);
 */
#define ARR2_CREATE(%0,%1) %0[%1_1 * %1_2]
#define ARR3_CREATE(%0,%1) %0[%1_1 * %1_2 * %1_3]
#define ARR4_CREATE(%0,%1) %0[%1_1 * %1_2 * %1_3 * %1_4]

/**
 * Использование многомерного массива как буфер (имя переменной и размер)
 * 
 * @param %0        Имя переменной
 * @param %1        Префикс для размерности в #define
 * ...              Индексы
 *                  Пример:
 *                      #define SIZE3_1 2
 *                      #define SIZE3_2 2
 *                      #define SIZE3_3 32
 * 
 *                      char ARR3_CREATE(arr3, SIZE3);
 *                      strcopy(ARR3_WRITE(arr3, SIZE3, 0, 0, 0), "test3");
 */
#define ARR2_WRITE(%0,%1,%2,%3)         ARR2_POS(%0, %1, %2, %3), %1_2
#define ARR3_WRITE(%0,%1,%2,%3,%4)      ARR3_POS(%0, %1, %2, %3, %4), %1_3
#define ARR4_WRITE(%0,%1,%2,%3,%4,%5)   ARR4_POS(%0, %1, %2, %3, %4, %5), %1_4

/**
 * Позиция многомерного массива для чтения или записи
 * 
 * @param %0        Имя переменной
 * @param %1        Префикс для размерности в #define
 * ...              Индексы
 *                  Пример:
 *                      #define SIZE3_1 2
 *                      #define SIZE3_2 2
 *                      #define SIZE3_3 32
 * 
 *                      char ARR3_CREATE(arr3, SIZE3);
 *                      strcopy(ARR3_WRITE(arr3, SIZE3, 0, 0, 0), "test3");
 *                      PrintToServer(ARR3_POS(arr3, SIZE3, 0, 0, 0));
 */
#define ARR2_POS(%0,%1,%2,%3) %0[%2 * %1_2 + \
    %3]
#define ARR3_POS(%0,%1,%2,%3,%4) %0[%2 * %1_2 * %1_3 + \
    %3 * %1_3 + \
    %4]
#define ARR4_POS(%0,%1,%2,%3,%4,%5) %0[%2 * %1_2 * %1_3 * %1_4 + \
    %3 * %1_3 * %1_4 + \
    %4 * %1_4 + \
    %5]
