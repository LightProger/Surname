#include <stdio.h>

/* Программа-пример No2 из главы 12
   Руководства по С для новичков,
   3-е издание
   Файл Chapter12ex2.c
   Эта программа просит пользователя ввести фамилию
   латинскими буквами, и если фамилия пользователя
   начинается с букв, находящихся в диапазоне от P до S,
   его попросят пройти в отдельный кабинет для получения
   билетов */

/* Прототип функции */
void Surname(void);

int main ()
{
  Surname ();
  return 0;
}

/* Функция запроса у пользователя фамиллии, если первая буква фамилии находится в диапазоне между буквами "P" и "S"
 * его попросят пройти в отдельный кабинет для получения билетов */

void Surname(void)
{
 /* Объявить массив для хранения имени пользователя
 и запросить ввод имени пользователя */
  int size = 25;
  char name[size];
  char message[] = { "To obtain tickets go to the office 2432." };

  printf("Enter please Your Surname:\n");
  scanf("%s", name);                       // для символьного массива & не нужен

  if((name[0] >= 'P') && (name[0] <= 'S')) { printf("%s", message); }
  else if((name[0] >= 'p') && (name[0] <= 's')) { printf("%s", message); }
  else { printf("The results of the preliminary test, You are admitted to the exam."); }

  printf("\n");

  return;
}