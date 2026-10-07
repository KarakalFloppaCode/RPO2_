#include <iostream>
#include <Windows.h>

int PodschetSkidka(int skidka, int arr_tea, int summ_check)
{
	skidka = arr_tea % 3;
	if (skidka != 0)
	{
		for (int i = skidka; i > 0; i--)
		{
			std::cout << "Поздравляем! Скидка целых 5 процентов\n";
			Sleep(1500);
			summ_check = ((3 * arr_tea) * 5) / 100;
			break;
		}
	}
	return summ_check;
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int choose=0;
	int skidka = 0;
	int arr_fruit[4] = {100, 200, 300, 400};
	int arr_ovoshi[3] = { 25, 30, 50 };
	int arr_tea[2] = { 125, 250 };
	int check = 0, kategory = 0;
	double summ_check = 0;
	int summ_check_skidka = 0;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\t\tJunior Магазин\n\n";
		std::cout << "Категории соков:\n\n";
		std::cout << "1. Фруктовые\n";
		std::cout << "2. Овощные\n";
		std::cout << "3. Чай\n";
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
					summ_check += choose * arr_fruit[i - 1];
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
						summ_check -= skidka_ovoshi * arr_ovoshi[i-1];
					}
					summ_check += choose * arr_ovoshi[i - 1];
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
					if (i == 2)
					{
						
						summ_check -= PodschetSkidka(skidka, arr_tea[1], summ_check);

					}
					summ_check += choose * arr_tea[i - 1];
					break;
				}
				break;
			}
		}
		else if (choose == 0)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\t\tJunior Магазин\n\n";
				std::cout << "Вы накупили на сумму " << summ_check << ".\n\n";
				if (summ_check > 1000)
				{
					std::cout << "Вы превысили сумму покупки в 1000 рублей, поэтому вам даём скидку в 13% на весь чек\n\n";
					summ_check_skidka = summ_check - (summ_check * 13) / 100;
					std::cout << "Вы накупили на сумму " << summ_check_skidka << " со скидкой.\n\n";
				}
				std::cout << "Вы хотите оплатить (1 - Да. 2 - Нет)?\n";
				std::cout << "Ввод: ";
				std::cin >> choose;
				if (choose == 1)
				{
					system("cls");
					std::cout << "\n\n\t\tБлагодарим за покупку";
					std::cout << "\n\n\t\t    Досвидания!\n\n";
					Sleep(1500);
					return 0;
				}
				else if (choose == 2)
				{
					
					break;
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