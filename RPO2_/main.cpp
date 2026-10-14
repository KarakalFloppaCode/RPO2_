#include <iostream>
#include <Windows.h>




int PodschetSkidka(int skidka, int kolvo, int summ_check, int arr_tea)
{
	skidka = kolvo / 3;
	if (skidka > 0)
	{

		std::cout << "Поздравляем! Скидка целых 5 процентов\n";
		Sleep(1500);

		summ_check = (((3 * arr_tea) * 5) / 100) * 1;
		return summ_check;
	}
	else
	{
		return 0;
	}
}

int GalyaOtmena(int check_vse[])
{
	
	int arr[11][2];
	int summ_check = 0;
	int arr_vse[10] = { 100, 200, 300, 400, 25, 30, 50, 125, 250, 100 };
	while (true)
	{
		int choose = 0;
		system("cls");
		std::cout << "\n\n\t\tJunior Магазин\n\n";
		std::cout << "Вы взяли: \n";
	




		if (check_vse != 0)
		{
			for (int i = 1, b = 0; ; )
			{
				if (check_vse[0] != 0)
				{
					arr[i][b] = 0;
					arr[i][1] = i;
					std::cout << i << ". ";
					std::cout << "Яблоки: " << check_vse[0] << "\n";
					i++;
				}
				if (check_vse[1] != 0)
				{
					arr[i][b] = 1;
					arr[i][1] = i;
					std::cout << i << ". ";
					std::cout << "Апельсины: " << check_vse[1] << "\n";
					i++;
				}
				if (check_vse[2] != 0)
				{
					arr[i][b] = 2;
					arr[i][1] = i;
					std::cout << i << ". ";
					
					std::cout << "Абрикосы: " << check_vse[2] << "\n";
					i++;
				}
				if (check_vse[3] != 0)
				{
					arr[i][b] = 3;
					arr[i][1] = i;
					std::cout << i << ". ";
					
					std::cout << "Груша: " << check_vse[3] << "\n";
					i++;
				}
				if (check_vse[4] != 0)
				{
					arr[i][1] = i;
					arr[i][b] = 4;
					std::cout << i << ". ";
					
					std::cout << "Помидоры: " << check_vse[4] << "\n";
					i++;
				}
				if (check_vse[5] != 0)
				{
					arr[i][b] = 5;
					arr[i][1] = i;
					std::cout << i << ". ";
					i++;
					std::cout << "Лук: " << check_vse[5] << "\n";

				}
				if (check_vse[6] != 0)
				{
					arr[i][b] = 6;
					arr[i][1] = i;
					std::cout << i << ". ";
					std::cout << "Огурцы: " << check_vse[6] << "\n";
					i++;
				}
				if (check_vse[7] != 0)
				{
					arr[i][b] = 7;
					arr[i][1] = i;
					std::cout << i << ". ";
					
					std::cout << "Чеснок: " << check_vse[7] << "\n";
					i++;
				}
				if (check_vse[8] != 0)
				{
					arr[i][b] = 8;
					arr[i][1] = i;
					std::cout << i << ". ";
					
					std::cout << "Петрушка: " << check_vse[8] << "\n";
					i++;
				}
				if (check_vse[9] != 0)
				{
					arr[i][b] = 9;
					arr[i][1] = i;
					std::cout << i << ". ";
					
					std::cout << "Боярешник: " << check_vse[9] << "\n";
					i++;
				}
				std::cout << "Какой товар вы хотите удалить? (0 - Выйти)\n";
				std::cout << "Ввод: ";
				std::cin >> choose;
				i = choose;
				if (choose > 0 && choose < 11)
				{
					for (int j = 0; j < 1; j++)
					{
						if (choose == arr[i][1])
						{
							j = arr[i][0];
							summ_check += arr_vse[j]*check_vse[j];

							check_vse[j] = 0;

							std::cout << "Успешно";
							Sleep(1500);



							return summ_check;
						}
					}
					std::cout << "Нет такого выбора";
					Sleep(1500);
					break;
				}
				else if (choose == 0)
				{
					return 0;
				}
				break;
			}



		}
	}

	return 0;
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int choose = 0;
	int skidka = 0;


	int check_vse[10]{};

	int arr_vse[10] = { 100, 200, 300, 400, 25, 30, 50, 125, 250, 100 };

	int apple_check = 0;
	int petruska_skidka = 0;
	int proverka_fruit = 0;
	int check = 0, kategory = 0;
	double summ_check = 0;
	int summ_check_skidka = 0;
	int proverka_nastoyki = 0;
	int summ_nastoyki = 0;

	while (true)
	{
		system("cls");




		std::cout << "\n\n\t\tJunior Магазин\n\n";
		std::cout << "Категории соков:\n\n";
		std::cout << "1. Фруктовые\n";
		std::cout << "2. Овощные\n";
		std::cout << "3. Чай\n";
		std::cout << "4. Настойка\n";
		std::cout << "0. Закончить покупку\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\t\tJunior Магазин\n\n";
				std::cout << "Фруктовые вкусы:\n\n";
				std::cout << "1. Яблочный (100)\n";
				std::cout << "2. Апельсиновый (200)\n";
				std::cout << "3. Абрикосовый (300)\n";
				std::cout << "4. Грушевый (400)\n";
				std::cout << "0. Выйти\n";
				std::cout << "Ввод: ";
				std::cin >> kategory;

				if (kategory == 0)
				{
					break;
				}
				else if (kategory > 4 || kategory < 0)
				{
					std::cout << "Нет такой категории\n";
					Sleep(1500);
					continue;
				}

				for (int i = kategory - 1; ; )
				{
					system("cls");
					std::cout << "\n\n\t\tJunior Магазин\n\n";
					std::cout << "Введите количество товара которого хотите купить\n";
					std::cout << "Ввод: ";
					std::cin >> choose;
					if (choose <= 0)
					{
						std::cout << "Невозможно взять столько товара";
						Sleep(1500);
						continue;
					}

					check_vse[i] += choose;
					check_vse[9] = 0;
					proverka_fruit += 1;
					summ_check += choose * arr_vse[i];
					summ_check -= summ_nastoyki;
					break;
				}
				break;
			}

		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\t\tJunior Магазин\n\n";
				std::cout << "Овощные вкусы:\n\n";
				std::cout << "1. Томаты (25)\n";
				std::cout << "2. Луковый (30)\n";
				std::cout << "3. Огуречный (50)\n";
				std::cout << "0. Выйти\n";
				std::cout << "Ввод: ";
				std::cin >> kategory;

				if (kategory == 0)
				{
					break;
				}

				if (kategory > 3 || kategory < 0)
				{
					std::cout << "Нет такой категории\n";
					Sleep(1500);
					continue;
				}
				for (int i = kategory; ; )
				{
					system("cls");
					std::cout << "\n\n\t\tJunior Магазин\n\n";
					std::cout << "Введите количество товара которого хотите купить\n";
					std::cout << "Ввод: ";
					std::cin >> choose;
					if (choose <= 0)
					{
						std::cout << "Невозможно взять столько товара";
						Sleep(1500);
						continue;
					}
					int skidka_ovoshi = choose / 4;
					if (i == 2 && skidka_ovoshi != 0)
					{
						std::cout << "Поздравляем! У вас скидка! Каждый 4 литр бесплатно";
						Sleep(1500);
						summ_check -= skidka_ovoshi * arr_vse[i + 3];
					}
					check_vse[i + 3] += choose;
					summ_check += choose * arr_vse[i+3];
					break;
				}
				break;

			}
		}
		else if (choose == 3)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\t\tJunior Магазин\n\n";
				std::cout << "Чай:\n\n";
				std::cout << "1. Чесночный (125)\n";
				std::cout << "2. Петрушечный (250)\n";
				std::cout << "0. Выйти\n";
				std::cout << "Ввод: ";
				std::cin >> kategory;

				if (kategory == 0)
				{
					break;
				}

				if (kategory > 2 || kategory < 0)
				{
					std::cout << "Нет такой категории\n";
					Sleep(1500);
					continue;
				}
				for (int i = kategory; ; )
				{
					system("cls");
					std::cout << "\n\n\t\tJunior Магазин\n\n";
					std::cout << "Введите количество товара которого хотите купить\n";
					std::cout << "Ввод: ";
					std::cin >> choose;
					if (choose <= 0)
					{
						std::cout << "Невозможно взять столько товара";
						Sleep(1500);
						continue;
					}
					check_vse[i + 6] += choose;
					if (i == 2 && petruska_skidka == 0)
					{

						summ_check -= PodschetSkidka(skidka, choose, summ_check, arr_vse[8]);
						petruska_skidka += 1;
					}

					summ_check += choose * arr_vse[i+6];
					break;
				}
				break;
			}
		}
		else if (choose == 4 && check_vse[0] == 0 && check_vse[1] == 0 && check_vse[2] == 0 && check_vse[3] == 0)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\t\tJunior Магазин\n\n";
				std::cout << "Настойка:\n\n";
				std::cout << "1. Боярышник (100)\n";
				std::cout << "0. Выйти\n";
				std::cout << "Ввод: ";
				std::cin >> kategory;

				if (kategory == 0)
				{
					break;
				}

				if (kategory > 1 || kategory < 0)
				{
					std::cout << "Нет такой категории\n";
					Sleep(1500);
					continue;
				}
				for (int i = kategory; ; )
				{
					system("cls");
					std::cout << "\n\n\t\tJunior Магазин\n\n";
					std::cout << "Введите количество товара которого хотите купить\n";
					std::cout << "Ввод: ";
					std::cin >> choose;
					if (choose <= 0)
					{
						std::cout << "Невозможно взять столько товара";
						Sleep(1500);
						continue;
					}
					check_vse[i + 8] += choose;
					summ_nastoyki += choose * arr_vse[i+8];
					summ_check += summ_nastoyki;
					break;
				}
				break;
			}
		}
		else if (choose == 4 && proverka_fruit != 0)
		{
			std::cout << "Вы уже купили фруктов, поэтому вам нельзя покупать настойки\n";
			Sleep(1500);
			continue;
		}
		else if (choose == 0)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\t\tJunior Магазин\n\n";


				if (check_vse != 0)
				{
					std::cout << "Корзина:\n";
					if (check_vse[0] != 0)
					{
						std::cout << "Яблоки: " << check_vse[0] << "\n";
					}
					if (check_vse[1] != 0)
					{
						std::cout << "Апельсины: " << check_vse[1] << "\n";
					}
					if (check_vse[2] != 0)
					{
						
						std::cout << "Абрикосы: " << check_vse[2] << "\n";
					}
					if (check_vse[3] != 0)
					{
						std::cout << "Грушы: " << check_vse[3] << "\n";
					}
					if (check_vse[4] != 0)
					{
						std::cout << "Помидоры: " << check_vse[4] << "\n";
					}
					if (check_vse[5] != 0)
					{
						std::cout << "Лук: " << check_vse[5] << "\n";
					}
					if (check_vse[6] != 0)
					{
						std::cout << "Огурцы: " << check_vse[6] << "\n";
					}
					if (check_vse[7] != 0)
					{
						std::cout << "Чеснок: " << check_vse[7] << "\n";
					}
					if (check_vse[8] != 0)
					{
						std::cout << "Петрушка: " << check_vse[8] << "\n";
					}
					if (check_vse[9] != 0)
					{
						std::cout << "Боярешник: " << check_vse[9] << "\n";
					}




				}


				std::cout << "\n\nВы накупили на сумму " << summ_check << ".\n\n";
				if (summ_check > 1000)
				{
					std::cout << "Вы превысили сумму покупки в 1000 рублей, поэтому вам даём скидку в 13% на весь чек\n\n";
					summ_check_skidka = summ_check - (summ_check * 13) / 100;
					std::cout << "Вы накупили на сумму " << summ_check_skidka << " со скидкой.\n\n";
				}
				std::cout << "Вы хотите оплатить (1 - Да. 2 - Нет. 3 - Удалить товары из корзины)?\n";
				std::cout << "Ввод: ";
				std::cin >> choose;
				if (choose == 1)
				{
					system("cls");
					std::cout << "\n\n\t\tБлагодарим за покупку";
					std::cout << "\n\n\t\t    Досвидания!\n\n";
					Sleep(1500);
					choose = 0;
					skidka = 0;

					proverka_fruit = 0;
					check = 0;
					kategory = 0;
					summ_check = 0;
					petruska_skidka = 0;
					summ_check_skidka = 0;
					proverka_nastoyki = 0;
					summ_nastoyki = 0;
					for (int i = 0; i < 10; i++)
					{
						check_vse[i] = 0;
					}

					break;
				}
				else if (choose == 2)
				{

					break;
				}
				else if (choose == 3)
				{
					
					summ_check -= GalyaOtmena(check_vse);

				}
				else
				{
					std::cout << "Неккоретный ввод\n";
					Sleep(1500);
				}
			}

		}
		else
		{
			std::cout << "Неккоретный ввод\n";
			Sleep(1500);
		}
	}

	return 0;
}