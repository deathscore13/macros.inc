/**
 * Макросы для SourceMod 1.7+
 * 
 * https://github.com/deathscore13/Macros
 */

#if defined _macros_included
 #endinput
#endif
#define _macros_included

#define MAX_INT_BITS 32     /**< Максимальное количество бит в int */

/**
 * Округление %1
 * 
 * @param %1        Значение для округления
 * @param %2        Делитель
 * 
 * @return          Округлённое число. Например 4 в ROUND_RESIDUE(1, 4) или 4 в ROUND_RESIDUE(4, 4)
 */
#define ROUND_RESIDUE(%1,%2) (%1 + ROUND_RESIDUE_EX(%1, %2))

/**
 * Нахождение числа для округления %1
 * 
 * @param %1        Значение для округления
 * @param %2        Делитель
 * 
 * @return          Число для округления. Например 3 в ROUND_RESIDUE_EX(1, 4) или 0 в ROUND_RESIDUE_EX(4, 4)
 */
#define ROUND_RESIDUE_EX(%1,%2) ((%2 - (%1 % %2)) % %2)

/**
 * Присваивает true переменной
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (0-31)
 */
#define bTRUE(%1,%2) view_as<int>(%1) |= 1 << (%2)

/**
 * Присваивает false переменной
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (0-31)
 */
#define bFALSE(%1,%2) view_as<int>(%1) ^= 1 << (%2)

/**
 * Получение значения переменной
 * Для получения 1 при true, необходимо использовать !! перед bGET()
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (0-31)
 * 
 * @return          true или false
 */
#define bGET(%1,%2) (view_as<int>(%1) & 1 << (%2))

/**
 * Установка значения переменной
 * Если значение является константой, то используйте bTRUE/bFALSE
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (0-31)
 * @param %3        Переменная
 */
#define bSET(%1,%2,%3) view_as<int>(%1) = %3 ? view_as<int>(%1) | 1 << (%2) : view_as<int>(%1) ^ (1 << (%2))


/**
 * Создаёт переменную с более 32 позиций для записи
 * 
 * @param %1        Имя переменной
 * @param %2        Максимальное количество позиций
 */
#define bCREATE_EX(%1,%2) %1[(%2) / MAX_INT_BITS + 1]

/**
 * Присваивает true переменной
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (можно более 31)
 */
#define bTRUE_EX(%1,%2) view_as<int>(%1[(%2) / MAX_INT_BITS]) |= 1 << (%2)

/**
 * Присваивает false переменной
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (можно более 31)
 */
#define bFALSE_EX(%1,%2) view_as<int>(%1[(%2) / MAX_INT_BITS]) ^= 1 << (%2)

/**
 * Получение значения переменной
 * Для получения 1 при true, необходимо использовать !! перед bGET()
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (можно более 31)
 * 
 * @return          true или false
 */
#define bGET_EX(%1,%2) (view_as<int>(%1[(%2) / MAX_INT_BITS]) & 1 << (%2))

/**
 * Установка значения переменной
 * Если значение является константой, то используйте bTRUE/bFALSE
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (можно более 31)
 * @param %3        Значение
 */
#define bSET_EX(%1,%2,%3) view_as<int>(%1[(%2) / MAX_INT_BITS]) = %3 ? view_as<int>(%1[(%2) / MAX_INT_BITS]) | 1 << (%2) : \
    view_as<int>(%1[(%2) / MAX_INT_BITS]) ^ (1 << (%2))


/**
 * Использование массива как буфер (имя переменной и размер)
 * 
 * @param %1        Имя переменной
 * ...              Индексы
 */
#define sz(%1) %1, sizeof(%1)
#define sz2(%1,%2) %1[%2], sizeof(%1[])
#define sz3(%1,%2,%3) %1[%2][%3], sizeof(%1[][])
#define sz4(%1,%2,%3,%4) %1[%2][%3][%4], sizeof(%1[][][])

/**
 * Использование массива как буфер (имя переменной и длина строки)
 * 
 * @param %1        Имя переменной
 * ...              Индексы
 */
#define szlen(%1) %1, strlen(%1)
#define szlen2(%1,%2) %1[%2], strlen(%1[%2])
#define szlen3(%1,%2,%3) %1[%2][%3], strlen(%1[%2][%3])
#define szlen4(%1,%2,%3,%4) %1[%2][%3][%4], strlen(%1[%2][%3][%4])


/**
 * Создание многомерного массива (2-4)
 * 
 * @param %1        Имя переменной
 * @param %2        Префикс для размерности в #define
 *                  Пример:
 *                      #define SIZE2_1 2
 *                      #define SIZE2_2 32
 * 
 *                      char ARR2_CREATE(arr2, SIZE2);
 */
#define ARR2_CREATE(%1,%2) %1[%2_1 * %2_2]
#define ARR3_CREATE(%1,%2) %1[%2_1 * %2_2 * %2_3]
#define ARR4_CREATE(%1,%2) %1[%2_1 * %2_2 * %2_3 * %2_4]

/**
 * Использование многомерного массива как буфер (имя переменной и размер)
 * 
 * @param %1        Имя переменной
 * @param %2        Префикс для размерности в #define
 * ...              Индексы
 *                  Пример:
 *                      #define SIZE3_1 2
 *                      #define SIZE3_2 2
 *                      #define SIZE3_3 32
 * 
 *                      char ARR3_CREATE(arr3, SIZE3);
 *                      strcopy(ARR3_WRITE(arr3, SIZE3, 0, 0, 0), "test3");
 */
#define ARR2_WRITE(%1,%2,%3,%4)         ARR2_POS(%1, %2, %3, %4), %2_2
#define ARR3_WRITE(%1,%2,%3,%4,%5)      ARR3_POS(%1, %2, %3, %4, %5), %2_3
#define ARR4_WRITE(%1,%2,%3,%4,%5,%6)   ARR4_POS(%1, %2, %3, %4, %5, %6), %2_4

/**
 * Позиция многомерного массива для чтения или записи
 * 
 * @param %1        Имя переменной
 * @param %2        Префикс для размерности в #define
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
#define ARR2_POS(%1,%2,%3,%4) %1[%3 * %2_2 + \
    %4]
#define ARR3_POS(%1,%2,%3,%4,%5) %1[%3 * %2_2 * %2_3 + \
    %4 * %2_3 + \
    %5]
#define ARR4_POS(%1,%2,%3,%4,%5,%6) %1[%3 * %2_2 * %2_3 * %2_4 + \
    %4 * %2_3 * %2_4 + \
    %5 * %2_4 + \
    %6]


#if defined SPCOMP_MOD && defined _memory_included

/**
 * Использование стандартного многомерного массива как буфер (имя переменной и размер)
 * 
 * @param %1        Имя переменной
 * ...              Индексы
 *                  Пример:
 *                      char arr3[3][2][8];
 *                      strcopy(ARR3_WRITE_EX(arr3, 2, 1, 0), "test3");
 */
#define ARR2_WRITE_EX(%1,%2,%3)         ARR2_POS_EX(%1, %2, %3), sizeof(%1[])
#define ARR3_WRITE_EX(%1,%2,%3,%4)      ARR3_POS_EX(%1, %2, %3, %4), sizeof(%1[][])
#define ARR4_WRITE_EX(%1,%2,%3,%4,%5)   ARR4_POS_EX(%1, %2, %3, %4, %5), sizeof(%1[][][])

/**
 * Позиция стандартного многомерного массива для чтения или записи
 * 
 * @param %1        Имя переменной
 * ...              Индексы
 *                  Пример:
 *                      char arr3[3][2][8];
 *                      strcopy(ARR3_WRITE_EX(arr3, 2, 1, 0), "test3");
 *                      PrintToServer(ARR3_POS_EX(arr3, 2, 1, 0));
 */
#define ARR2_POS_EX(%1,%2,%3) g_ptr[view_as<int>(%1) + sizeof(%1) + \
    %2 * ROUND_RESIDUE(sizeof(%1[]), 4) + \
    %3]
#define ARR3_POS_EX(%1,%2,%3,%4) g_ptr[view_as<int>(%1) + (sizeof(%1) * sizeof(%1[]) + sizeof(%1)) + \
    %2 * sizeof(%1[]) * ROUND_RESIDUE(sizeof(%1[][]), 4) + \
    %3 * ROUND_RESIDUE(sizeof(%1[][]), 4) + \
    %4]
#define ARR4_POS_EX(%1,%2,%3,%4,%5) g_ptr[view_as<int>(%1) + (sizeof(%1) * sizeof(%1[]) * sizeof(%1[][]) + \
    sizeof(%1) * sizeof(%1[]) + \
    sizeof(%1)) + \
    %2 * sizeof(%1[]) * sizeof(%1[][]) * ROUND_RESIDUE(sizeof(%1[][][]), 4) + \
    %3 * sizeof(%1[][]) * ROUND_RESIDUE(sizeof(%1[][][]), 4) + \
    %4 * ROUND_RESIDUE(sizeof(%1[][][]), 4) + \
    %5]

#endif  // defined SPCOMP_MOD && defined _memory_included
