///*Написать программу, которая выводит на экран линию
//заданным символом, вертикальную или горизонтальную, при-
//чем линия может выводиться быстро, нормально и медленно.
//Общение с пользователем организовать через меню.*/
//
//#include <iostream>
//#include <windows.h>
//
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	char symbol;
//	int line, speed, delay;
//	std::cout << "\n\tКакой вид символа выберете - ";
//	std::cin >> symbol;
//	std::cout << "\n\tБудет предоставлено вариант выбора скорости линии.";
//	std::cout << "\n\t1. Медленно.\n\t2. Нормально.\n\t3. Быстро.";
//	std::cout << "\n\tВыберете скорость показа - ";
//	std::cin >> speed;
//	switch (speed)
//	{
//	case 1:
//	{
//		delay = 1000;
//		break;
//	}
//	case 2:
//	{
//		delay = 500;
//		break;
//	}
//	case 3:
//	{
//		delay = 0;
//		break;
//	}
//	default:
//		std::cout << "\n\tНеправильный идентификатор скорости!";
//		std::cout << "\n\tЛиния будет нарисована быстро.";
//		delay = 0;
//		break;
//	}
//	std::cout << "\n\tБужет предоставлен тип линии.";
//	std::cout << "\n\t1. Вертикальная.\n\t2. Горизонтальная.";
//	std::cout << "\n\tВыберете тип линии - ";
//	std::cin >> line;
//	switch (line)
//	{
//	case 1:
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			Sleep(delay);
//			std::cout << symbol << std::endl;
//		}
//		break;
//	}
//	case 2:
//	{
//		for (int ii = 0; ii < 10; ii++)
//		{
//			Sleep(delay);
//			std::cout << symbol << ' ';
//		}
//		break;
//
//	}
//	default:
//		std::cout << "\n\tНеправильный тип линии.";
//		std::cout << "\n\tГоризонтальная линия будет нарисована.";
//		for (int ii = 0; ii < 10; ii++)
//		{
//			Sleep(delay);
//			std::cout << symbol << ' ';
//		}
//		break;
//	}
//	return 0;
//}

///*Написать игру «Кубики». Пользователь и компьютер по
//очереди бросают 2 кубика. Победитель — тот, у кого по резуль-
//татам трех бросков сумма больше. Предусмотреть красивый
//интерфейс игры.*/
//#include <iostream>
//#include <Windows.h>
//#include <time.h>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int userChoice, user1, user2, userPoints = 0, botPoints = 0;
//	srand(time(NULL));
//
//	do
//	{
//		std::cout << "\n\n\tДобро пожаловать в игру!";
//		std::cout << "\n\tПравила игры: игрок (Вы) и бот играют.";
//		std::cout << "\n\t1. Бросить кости.\n\t2. Завершить игру.";
//		std::cout << "\n\tВариант выбора - ";
//		std::cin >> userChoice;
//		switch (userChoice)
//		{
//		case 1:
//		{
//			do
//			{
//				std::cout << "\n\tОпределение порядка игры";
//				std::cout << "\n\n\tИгрок бросает кости.";
//				Sleep(1000);
//				user1 = 1 + rand() % 5;
//				std::cout << "\n\tРезультат игрока - " << user1 << "\n";
//				switch (user1)
//				{
//				case 1:
//				{
//					std::cout << "\n\tКубик рубик выбросил 1.";
//					break;
//				}
//				case 2:
//				{
//					std::cout << "\n\tКубик рубик выбросил 2.";
//					break;
//				}
//				case 3:
//				{
//					std::cout << "\n\tКубик рубик выбросил 3.";
//					break;
//				}
//				case 4:
//				{
//					std::cout << "\n\tКубик рубик выбросил 4.";
//					break;
//				}
//				case 5:
//				{
//					std::cout << "\n\tКубик рубик выбросил 5.";
//					break;
//				}
//				case 6:
//				{
//					std::cout << "\n\tКубик рубик выбросил 6.";
//					break;
//				}
//				}
//				std::cout << "\n\n\tБот бросает кости.";
//				Sleep(1000);
//				user2 = 1 + rand() % 5;
//				std::cout << "\n\tРезультать Бота - " << user2 << "\n";
//				switch (user2)
//				{
//				case 1:
//				{
//					std::cout << "\n\tКубик рубик выбросил 1.";
//					break;
//				}
//				case 2:
//				{
//					std::cout << "\n\tКубик рубик выбросил 2.";
//					break;
//				}
//				case 3:
//				{
//					std::cout << "\n\tКубик рубик выбросил 3.";
//					break;
//				}
//				case 4:
//				{
//					std::cout << "\n\tКубик рубик выбросил 4.";
//					break;
//				}
//				case 5:
//				{
//					std::cout << "\n\tКубик рубик выбросил 5.";
//					break;
//				}
//				case 6:
//				{
//					std::cout << "\n\tКубик рубик выбросил 6.";
//					break;
//				}
//				}
//				if (user1 == user2)
//				{
//					std::cout << "\n\tИгра заново.\n";
//				}
//			} while (user1 == user2);
//			if (user1 > user2)
//			{
//				std::cout << "\n\tИгрок ходит первым.\n\tБот ходит вторым.";
//				for (int ii = 0; ii < 3; ii++)
//				{
//					std::cout << "\n\t" << ii + 1 << "- раунд начинается.\n";
//					do
//					{
//						std::cout << "\n\tВведите «1», чтобы распределить кости - ";
//						std::cin >> userChoice;
//					} while (userChoice != 1);
//					std::cout << "\n\n\tИгрок бросает кости.";
//					Sleep(1000);
//					user1 = 1 + rand() % 5;
//					user2 = 1 + rand() % 5;
//					userPoints = userPoints + user1 + user2;
//					std::cout << "\n\tРезультат игрока - " << user1 << ' ' << user2;
//					switch (user1)
//					{
//					case 1:
//					{
//						std::cout << "\n\tКубик рубик выбросил 1.";
//						break;
//					}
//					case 2:
//					{
//						std::cout << "\n\tКубик рубик выбросил 2.";
//						break;
//					}
//					case 3:
//					{
//						std::cout << "\n\tКубик рубик выбросил 3.";
//						break;
//					}
//					case 4:
//					{
//						std::cout << "\n\tКубик рубик выбросил 4.";
//						break;
//					}
//					case 5:
//					{
//						std::cout << "\n\tКубик рубик выбросил 5.";
//						break;
//					}
//					case 6:
//					{
//						std::cout << "\n\tКубик рубик выбросил 6.";
//						break;
//					}
//					}
//					switch (user2)
//					{
//					case 1:
//					{
//						std::cout << "\n\tКубик рубик выбросил 1.";
//						break;
//					}
//					case 2:
//					{
//						std::cout << "\n\tКубик рубик выбросил 2.";
//						break;
//					}
//					case 3:
//					{
//						std::cout << "\n\tКубик рубик выбросил 3.";
//						break;
//					}
//					case 4:
//					{
//						std::cout << "\n\tКубик рубик выбросил 4.";
//						break;
//					}
//					case 5:
//					{
//						std::cout << "\n\tКубик рубик выбросил 5.";
//						break;
//					}
//					case 6:
//					{
//						std::cout << "\n\tКубик рубик выбросил 6.";
//						break;
//					}
//					}
//					std::cout << "\n\n\tБот бросает кости.";
//					Sleep(1000);
//					user1 = 1 + rand() % 5;
//					user2 = 1 + rand() % 5;
//					botPoints = botPoints + user1 + user2;
//					std::cout << "\n\tРезультат игрока - " << user1 << ' ' << user2;
//					switch (user1)
//					{
//					case 1:
//					{
//						std::cout << "\n\tКубик рубик выбросил 1.";
//						break;
//					}
//					case 2:
//					{
//						std::cout << "\n\tКубик рубик выбросил 2.";
//						break;
//					}
//					case 3:
//					{
//						std::cout << "\n\tКубик рубик выбросил 3.";
//						break;
//					}
//					case 4:
//					{
//						std::cout << "\n\tКубик рубик выбросил 4.";
//						break;
//					}
//					case 5:
//					{
//						std::cout << "\n\tКубик рубик выбросил 5.";
//						break;
//					}
//					case 6:
//					{
//						std::cout << "\n\tКубик рубик выбросил 6.";
//						break;
//					}
//					}
//					switch (user2)
//					{
//					case 1:
//					{
//						std::cout << "\n\tКубик рубик выбросил 1.";
//						break;
//					}
//					case 2:
//					{
//						std::cout << "\n\tКубик рубик выбросил 2.";
//						break;
//					}
//					case 3:
//					{
//						std::cout << "\n\tКубик рубик выбросил 3.";
//						break;
//					}
//					case 4:
//					{
//						std::cout << "\n\tКубик рубик выбросил 4.";
//						break;
//					}
//					case 5:
//					{
//						std::cout << "\n\tКубик рубик выбросил 5.";
//						break;
//					}
//					case 6:
//					{
//						std::cout << "\n\tКубик рубик выбросил 6.";
//						break;
//					}
//					}
//					std::cout << ii + 1 << " - результаты раунда.\n";
//					std::cout << "\n\tОчки игрока - " << userPoints << "\n";
//					std::cout << "\n\tОчки бота - " << botPoints << "\n";
//					Sleep(1000);
//				}
//			}
//			else
//			{
//				std::cout << "\n\tБот ходит первым.\n\tИгрок идет вторым.\n";
//				for (int jj = 0; jj < 3; jj++)
//				{
//					std::cout << "\t" << jj + 1 << " - раунд начинается";
//					std::cout << "\n\n\tБот бросает кости";
//					Sleep(1000);
//					user1 = 1 + rand() % 5;
//					user2 = 1 + rand() % 5;
//					botPoints = botPoints + user1 + user2;
//					std::cout << "\n\tРезультат бота - " << user1 << ' ' << user2;
//					switch (user1)
//					{
//					case 1:
//					{
//						std::cout << "\n\tКубик рубик выбросил 1.";
//						break;
//					}
//					case 2:
//					{
//						std::cout << "\n\tКубик рубик выбросил 2.";
//						break;
//					}
//					case 3:
//					{
//						std::cout << "\n\tКубик рубик выбросил 3.";
//						break;
//					}
//					case 4:
//					{
//						std::cout << "\n\tКубик рубик выбросил 4.";
//						break;
//					}
//					case 5:
//					{
//						std::cout << "\n\tКубик рубик выбросил 5.";
//						break;
//					}
//					case 6:
//					{
//						std::cout << "\n\tКубик рубик выбросил 6.";
//						break;
//					}
//					}
//					switch (user2)
//					{
//					case 1:
//					{
//						std::cout << "\n\tКубик рубик выбросил 1.";
//						break;
//					}
//					case 2:
//					{
//						std::cout << "\n\tКубик рубик выбросил 2.";
//						break;
//					}
//					case 3:
//					{
//						std::cout << "\n\tКубик рубик выбросил 3.";
//						break;
//					}
//					case 4:
//					{
//						std::cout << "\n\tКубик рубик выбросил 4.";
//						break;
//					}
//					case 5:
//					{
//						std::cout << "\n\tКубик рубик выбросил 5.";
//						break;
//					}
//					case 6:
//					{
//						std::cout << "\n\tКубик рубик выбросил 6.";
//						break;
//					}
//					}
//					do
//					{
//						std::cout << "\n\tВведите «1», чтобы распределить кости - ";
//						std::cin >> userChoice;
//					} while (userChoice != 1);
//					std::cout << "\n\n\tИгрок бросает кости.";
//					Sleep(1000);
//					user1 = 1 + rand() % 5;
//					user2 = 1 + rand() % 5;
//					userPoints = userPoints + user1 + user2;
//					std::cout << "\n\tРезультат игрока - " << user1 << ' ' << user2;
//					switch (user1)
//					{
//					case 1:
//					{
//						std::cout << "\n\tКубик рубик выбросил 1.";
//						break;
//					}
//					case 2:
//					{
//						std::cout << "\n\tКубик рубик выбросил 2.";
//						break;
//					}
//					case 3:
//					{
//						std::cout << "\n\tКубик рубик выбросил 3.";
//						break;
//					}
//					case 4:
//					{
//						std::cout << "\n\tКубик рубик выбросил 4.";
//						break;
//					}
//					case 5:
//					{
//						std::cout << "\n\tКубик рубик выбросил 5.";
//						break;
//					}
//					case 6:
//					{
//						std::cout << "\n\tКубик рубик выбросил 6.";
//						break;
//					}
//					}
//					switch (user2)
//					{
//					case 1:
//					{
//						std::cout << "\n\tКубик рубик выбросил 1.";
//						break;
//					}
//					case 2:
//					{
//						std::cout << "\n\tКубик рубик выбросил 2.";
//						break;
//					}
//					case 3:
//					{
//						std::cout << "\n\tКубик рубик выбросил 3.";
//						break;
//					}
//					case 4:
//					{
//						std::cout << "\n\tКубик рубик выбросил 4.";
//						break;
//					}
//					case 5:
//					{
//						std::cout << "\n\tКубик рубик выбросил 5.";
//						break;
//					}
//					case 6:
//					{
//						std::cout << "\n\tКубик рубик выбросил 6.";
//						break;
//					}
//					}
//					std::cout << "\n\t" << jj + 1 << " - результат раунда.\n";
//					std::cout << "\tОчки бота - " << botPoints << "\n";
//					std::cout << "\tОчки игрока - " << userPoints << "\n";
//					Sleep(1000);
//				}
//			}
//			std::cout << "\n\tРезультат Игры\n";
//			std::cout << "\tОчки бота - " << botPoints << "\n";
//			std::cout << "\tОчки игрока - " << userPoints << "\n";
//			if (userPoints > botPoints)
//			{
//				std::cout << "\n\tИгрок – победитель.";
//			}
//			else if (userPoints < botPoints)
//			{
//				std::cout << "\n\tБот – победитель.";
//			}
//			else
//			{
//				std::cout << "\n\tИгра ничейя.";
//			}
//			break;
//		case 2:
//		{
//			std::cout << "\n\tКонец игры";
//			break;
//		}
//		}
//		default:
//		{
//			std::cout << "\n\tНеправильный пункт меню!";
//		}
//		break;
//		}
//	} while (userChoice != 2);
//	return 0;
//}

///*Написать игру «GUESS MY NUMBER». Пользователь угадывает число, которое «загадал» компьютер.
//Возможны 2 уровня сложности: на первом уровне число от 1 до 10, на втором от 10 до 100.
//В начале игры пользователь выбирает уровень. В начале каждого уровня игроку даются «жизни» — 50%
//от длины диапазона угадывания на первом уровне и 25% — на втором (пример приведен ниже).
//За каждую ошибку игрок штрафуется — минус одна жизнь. Предусмотреть в игре возможность подсказки:
//«загаданное число больше — меньше твоего». Стоимость подсказки — одна жизнь (пользователь
//может принять подсказку в случае ошибки или отказаться от нее). Уровень продолжается, пока игрок жив
//или не угадает (состояние игрока «жив» — «убит» отображается рисунком в консоли).
//Очки после уровня — количество оставшихся жизней, умноженные на 5 для первого уровня и на
//10 для второго. Результат игры, количество очков или «Проигрыш», вывести в консоль.*/
//#include <iostream>
//#include <windows.h>
//#include <time.h>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int a, b, magicNum, userNum, userChoice, userLives, userPoints = 0, guessed = 0;
//	srand(time(NULL));
//	do
//	{
//		std::cout << "\n\n\tДобро пожаловать в игру «GUESS MY NUMBER»\n";
//		std::cout << "\tНужно выбрать действие!\n";
//		std::cout << "\t1. Первый уровень: магическое число.\n";
//		std::cout << "\t2. Второй уроверь: магическое число.\n\t3. Выход.\n";
//		std::cout << "\tТвой выбор - ";
//		std::cin >> userChoice;
//		switch (userChoice)
//		{
//		case 1:
//		{
//			std::cout << "\n\tДобро пожаловать в первый уровень!\n";
//			std::cout << "\tПервый уровень магических числ от 1 до 10.\n";
//			a = 1;
//			b = 10;
//			userLives = (b - a + 1) / 2;
//			std::cout << "\tБот загадывает число.\n";
//			Sleep(1000);
//			magicNum = a + rand() % (b - a);
//			std::cout << "\tВолшебное число готово!\n\tДавайте попробуем угадать!\n";
//			do
//			{
//				std::cout << "\n\tТолько сейчас у тебя есть " << userLives;
//				std::cout << " - жизни.\n";
//				std::cout << "\n\tПопробуйте угадать, ваш номер? - ";
//				std::cin >> userNum;
//				if (userNum == magicNum)
//				{
//					std::cout << "\n\tВы угадали магическое число!";
//					guessed = 1;
//				}
//				else
//				{
//					std::cout << "\n\tВы потеряли один жизнь!";
//					userLives--;
//					std::cout << "\n\tУ Вас осталось жизни - " << userLives;
//					do
//					{
//						std::cout << "\n\tХотите небольшую подсказку? Это стоит 1 жизни!";
//						std::cout << "\n\tСделайте выбор.";
//						std::cout << "\n\t1. Да.\n\t0. Нет.";
//						std::cin >> userChoice;
//						if (userChoice == 1)
//						{
//							if (userNum > magicNum)
//							{
//								std::cout << "\n\tДавай меньше...";
//								userLives--;
//							}
//							else
//							{
//								std::cout << "\n\tДавай больше...";
//								userLives--;
//							}
//						}
//					} while ((userChoice != 1) && (userChoice != 0));
//				}
//			} while ((userLives > 0) && (guessed == 0));
//			userPoints = userLives * 5;
//			if (userPoints == 0)
//			{
//				std::cout << "\n\tВы проиграли!";
//			}
//			else
//			{
//				std::cout << "\n\tТвой счет - " << userPoints;
//			}
//		}break;
//		case 2:
//		{
//			std::cout << "\n\tДобро пожаловать на 2-й уровень: магическое число [10..100]!";
//			a = 10;
//			b = 100;
//			userLives = (b - a + 1) / 4;
//			std::cout << "\n\tБот загадывает число!";
//			Sleep(1000);
//			magicNum = a + rand() % (b - a);
//			std::cout << "\n\tВолшебное число готово! Давайте попробуем угадать!";
//			do
//			{
//				std::cout << "\n\tТолько сейчас у тебя есть " << userLives;
//				std::cout << " - жизни.\n";
//				std::cout << "\n\tПопробуйте угадать, ваш номер? - ";
//				std::cin >> userNum;
//				if (userNum == magicNum)
//				{
//					std::cout << "\n\tВы угадали магическое число!";
//					guessed = 1;
//				}
//				else
//				{
//					std::cout << "\n\tВы потеряли один жизнь!";
//					userLives--;
//					std::cout << "\n\tУ Вас осталось жизни - " << userLives;
//					do
//					{
//						std::cout << "\n\tХотите небольшую подсказку? Это стоит 1 жизни!";
//						std::cout << "\n\tСделайте выбор.";
//						std::cout << "\n\t1. Да.\n\t0. Нет.";
//						std::cin >> userChoice;
//						if (userChoice == 1)
//						{
//							if (userNum > magicNum)
//							{
//								std::cout << "\n\tДавай меньше...";
//								userLives--;
//							}
//							else
//							{
//								std::cout << "\n\tДавай больше...";
//								userLives--;
//							}
//						}
//					} while ((userChoice != 1) && (userChoice != 0));
//				}
//			} while ((userLives > 0) && (guessed == 0));
//			userPoints == userLives * 10;
//			if (userPoints == 0)
//			{
//				std::cout << "\n\tВы проиграли!";
//			}
//			else
//			{
//				std::cout << "\n\tТвой счет - " << userPoints;
//			}
//		}break;
//		case 3:
//		{
//			std::cout << "\n\tВыход с игры!";
//		}break;
//		default:
//		{
//			std::cout << "\n\tНеправильный пункт меню!";
//		}
//		break;
//		}
//	} while (userChoice != 3);
//	return 0;
//}

///*Написать игру «GUESS MY NUMBER». Пользователь угадывает число, которое «загадал» компьютер.
//Возможны 2 уровня сложности: на первом уровне число от 1 до 10, на втором от 10 до 100.
//1. В начале игры пользователь выбирает уровень.
//2. В начале каждого уровня игроку даются «жизни» — 50%
//от длины диапазона угадывания на первом уровне и 25% — на втором (пример приведен ниже).
//3. За каждую ошибку игрок штрафуется — минус одна жизнь.
//4. Предусмотреть в игре возможность подсказки: «загаданное число больше — меньше твоего».
//5. Стоимость подсказки — одна жизнь (пользователь может принять подсказку в случае ошибки или отказаться от нее).
//6. Уровень продолжается, пока игрок жив или не угадает (состояние игрока «жив» — «убит» отображается рисунком
//в консоли).
//7. Очки после уровня — количество оставшихся жизней, умноженные на 5 для первого уровня и на 10 для второго.
//8. Результат игры, количество очков или «Проигрыш», вывести в консоль.*/
//
//#include <iostream>
//#include <time.h>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int a, b, botNumber, userNumber, userNumber1, userLevel, userCode;
//	srand(time(NULL));
//
//	std::cout << "\n\tДобро пожаловать в игру «GUESS MY NUMBER»!\n";
//	do
//	{
//		std::cout << "\n\n\tПравило игры."
//			"\n\tВ игре два уровня, первое простое от 0 до 10.\n\tВторое сложнее от 10 до 100."
//			"\n\tНужно угадать загаданное число от Бота!\n";
//		std::cout << "\t1. Уровень от 0 до 10.\n\t2. Уровень от 10 до 100.\n\t3. Выход."
//			"\n\tВыберете уровень игры! - ";
//		std::cin >> userCode;
//		switch (userCode)
//		{
//		case 1:
//		{
//			std::cout << "\n\tДобро пожаловать на первый уровень игры!";
//			a = 0;
//			b = 10;
//			userLevel = (b - a + 1) / 2;
//			std::cout << "\n\tВам предоставлено - " << userLevel << " жизни!";
//			std::cout << "\n\tБот загадывает число!";
//			botNumber = a + rand() % (b - a);
//			do
//			{
//				std::cout << "\n\tБот сформировал число, теперь угадайте его!";
//				std::cout << "\n\tВведите число загаданное Ботом - ";
//				std::cin >> userNumber;
//				if (userNumber == botNumber)
//				{
//					std::cout << "\n\tНевероятно Вы угадали чило загаданное Ботом!";
//					std::cout << "\n\tУ Вас кол-ва жизни - " << userLevel;
//					std::cout << "\n\tУ Вас всего кол-ва очков - " << userLevel * 5;
//				}
//				else
//				{
//					std::cout << "\n\tВы неугадали чило загаданное Ботом!";
//					userLevel--;
//					std::cout << "\n\tУ Вас осталось - " << userLevel << " жизни.";
//					std::cout << "\n\tХотите подсказку за минус один жизнь?\n\t1. Да.\n\t2. Нет.";
//					std::cout << "\n\tВаш выбор - ";
//					std::cin >> userNumber1;
//					if (userNumber1 == 1)
//					{
//						if (userNumber > botNumber)
//						{
//							std::cout << "\n\tДавай меньше...";
//						}
//						else
//						{
//							std::cout << "\n\tДавай больше...";
//						}
//						std::cout << "\n\tУ Вас осталось - " << --userLevel << " жизни.";
//					}
//
//				}
//			} while (userNumber != botNumber);
//		}break;
//		case 2:
//		{
//			std::cout << "\n\tДобро пожаловать на второй уровень игры!";
//			a = 10;
//			b = 100;
//			userLevel = (b - a + 1) / 4;
//			std::cout << "\n\tВам предоставлено - " << userLevel << " жизни!";
//			std::cout << "\n\tБот загадывает число!";
//			botNumber = a + rand() % (b - a);
//			do
//			{
//				std::cout << "\n\tБот сформировал число, теперь угадайте его!";
//				std::cout << "\n\tВведите число загаданное Ботом - ";
//				std::cin >> userNumber;
//				if (userNumber == botNumber)
//				{
//					std::cout << "\n\tНевероятно Вы угадали чило загаданное Ботом!";
//					std::cout << "\n\tУ Вас кол-ва жизни - " << userLevel;
//					std::cout << "\n\tУ Вас всего кол-ва очков - " << userLevel * 10;
//				}
//				else
//				{
//					std::cout << "\n\tВы неугадали чило загаданное Ботом!";
//					userLevel--;
//					std::cout << "\n\tУ Вас осталось - " << userLevel << " жизни.";
//					std::cout << "\n\tХотите подсказку за минус один жизнь?\n\t1. Да.\n\t2. Нет.";
//					std::cout << "\n\tВаш выбор - ";
//					std::cin >> userNumber1;
//					if (userNumber1 == 1)
//					{
//						if (userNumber > botNumber)
//						{
//							std::cout << "\n\tДавай меньше...";
//						}
//						else
//						{
//							std::cout << "\n\tДавай больше...";
//						}
//						std::cout << "\n\tУ Вас осталось - " << --userLevel << " жизни.";
//					}
//
//				}
//			} while (userNumber != botNumber);
//
//		}break;
//		case 3:
//		{
//			std::cout << "\n\tВыход с игры!";
//		}break;
//		default:
//		{
//			std::cout << "\n\tДанного пункт отсутствует в меню!";
//		}break;
//		}
//	} while (userCode != 3);
//	std::cout << "\n\tВыход с игры!";
//	return 0;
//}

///*Написать игру «GUESS MY NUMBER». Пользователь угадывает число, которое «загадал» компьютер.
//Возможны 2 уровня сложности: на первом уровне число от 1 до 10, на втором от 10 до 100.
//1. В начале игры пользователь выбирает уровень.
//2. В начале каждого уровня игроку даются «жизни» — 50%
//от длины диапазона угадывания на первом уровне и 25% — на втором (пример приведен ниже).
//3. За каждую ошибку игрок штрафуется — минус одна жизнь.
//4. Предусмотреть в игре возможность подсказки: «загаданное число больше — меньше твоего».
//5. Стоимость подсказки — одна жизнь (пользователь может принять подсказку в случае ошибки или отказаться от нее).
//6. Уровень продолжается, пока игрок жив или не угадает (состояние игрока «жив» — «убит» отображается рисунком
//в консоли).
//7. Очки после уровня — количество оставшихся жизней, умноженные на 5 для первого уровня и на 10 для второго.
//8. Результат игры, количество очков или «Проигрыш», вывести в консоль.*/
//
///*Модифицировать игру «GUESS MY NUMBER» следующим образом:
//■ пользователь не выбирает уровень, т. к. переход ко второму уровню возможен только после
//завершения первого без проигрыша (если игрок желает продолжать);
//■ первый уровень длится три раунда (на каждом раунде загадывается новое число), а второй — два раунда.
//Новые жизни начисляются игроку перед новым раундом.
//■ если пользователь проиграл раунд, то компьютеру начисляются очки за раунд в размере начальные жизни
//пользователя, умноженные на 5 для первого уровня и на 10 для второго;
//■ количество очков сохраняется и накапливается в раундах и уровнях;
//■ промежуточные итоги выводятся после каждого раунда и уровня.*/
//
//#include <iostream>
//#include <time.h>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int a, b, botNumber, userNumber, userNumber1, userLevel = 0, botLevel = 0, userCode;
//	srand(time(NULL));
//
//	std::cout << "\n\tДобро пожаловать в игру «GUESS MY NUMBER»!\n";
//	do
//	{
//		std::cout << "\n\n\tПравило игры."
//			"\n\tВ игре два уровня, первое простое от 0 до 10.\n\tВторое сложнее от 10 до 100."
//			"\n\tНужно угадать загаданное число от Бота!\n";
//		std::cout << "\t1. Уровень от 0 до 10 и от 10 до 100.\n\t2. Выход."
//			"\n\tВыберете уровень игры! - ";
//		std::cin >> userCode;
//		switch (userCode)
//		{
//		case 1:
//		{
//
//			do
//			{
//				std::cout << "\n\tВы находитесь на первый уровени игры!";
//				a = 0;
//				b = 10;
//				userLevel = (b - a + 1) / 2;
//				std::cout << "\n\tВам предоставлено - " << userLevel << " жизни!";
//				std::cout << "\n\tБот загадывает число!";
//				botNumber = a + rand() % (b - a);
//				std::cout << "\n\tВам подсказка - "
//					"сформированное число не больше - " << botNumber + 3 << " не меньше - " << botNumber - 3;
//				std::cout << "\n\tБот сформировал число, теперь угадайте его!";
//				std::cout << "\n\tВведите число загаданное Ботом - ";
//				std::cin >> userNumber;
//				if (userNumber == botNumber)
//				{
//					std::cout << "\n\tНевероятно Вы угадали чило загаданное Ботом!";
//					std::cout << "\n\tУ Вас кол-ва жизни - " << userLevel;
//					std::cout << "\n\tУ Вас всего кол-ва очков - " << userLevel * 5;
//				}
//				else
//				{
//					std::cout << "\n\tВы неугадали чило загаданное Ботом!";
//					userLevel--;
//					botLevel++;
//					std::cout << "\n\tУ Вас осталось - " << userLevel << " жизни.";
//					std::cout << "\n\tУ Бота осталось - " << botLevel * 5 << " очков.";
//					std::cout << "\n\tХотите подсказку за минус один жизнь?\n\t1. Да.\n\t2. Нет.";
//					std::cout << "\n\tВаш выбор - ";
//					std::cin >> userNumber1;
//					if (userNumber1 == 1)
//					{
//						if (userNumber > botNumber)
//						{
//							std::cout << "\n\tДавай меньше...";
//						}
//						else
//						{
//							std::cout << "\n\tДавай больше...";
//						}
//						std::cout << "\n\tУ Вас осталось - " << --userLevel << " жизни.";
//					}
//
//				}
//			} while (userNumber != botNumber);
//			std::cout << "\n\tИтоги первого уровня игры:\n\tУ Вас кол-ва - " << userLevel << " жизни.";
//			std::cout << "\n\tУ Вас кол-ва - " << userLevel * 5 << " очков.";
//			do
//			{
//				std::cout << "\n\tВы на втором уровени игры!";
//				a = 10;
//				b = 100;
//				userLevel = (b - a + 1) / 4;
//				std::cout << "\n\tВам предоставлено - " << userLevel << " жизни!";
//				std::cout << "\n\tБот загадывает число!";
//				botNumber = a + rand() % (b - a);
//				std::cout << "\n\tВам подсказка - "
//					"сформированное число не больше - " << botNumber + 10 << " не меньше - " << botNumber - 10;
//				std::cout << "\n\tБот сформировал число, теперь угадайте его!";
//				std::cout << "\n\tВведите число загаданное Ботом - ";
//				std::cin >> userNumber;
//				if (userNumber == botNumber)
//				{
//					std::cout << "\n\tНевероятно Вы угадали чило загаданное Ботом!";
//					std::cout << "\n\tУ Вас кол-ва жизни - " << userLevel;
//					std::cout << "\n\tУ Вас всего кол-ва очков - " << userLevel * 10;
//				}
//				else
//				{
//					std::cout << "\n\tВы неугадали чило загаданное Ботом!";
//					userLevel--;
//					botLevel++;
//					std::cout << "\n\tУ Вас осталось - " << userLevel << " жизни.";
//					std::cout << "\n\tУ Бота осталось - " << botLevel * 10 << " очков.";
//					std::cout << "\n\tХотите подсказку за минус один жизнь?\n\t1. Да.\n\t2. Нет.";
//					std::cout << "\n\tВаш выбор - ";
//					std::cin >> userNumber1;
//					if (userNumber1 == 1)
//					{
//						if (userNumber > botNumber)
//						{
//							std::cout << "\n\tДавай меньше...";
//						}
//						else
//						{
//							std::cout << "\n\tДавай больше...";
//						}
//						std::cout << "\n\tУ Вас осталось - " << --userLevel << " жизни.";
//					}
//
//				}
//			} while (userNumber != botNumber);
//			std::cout << "\n\tИтоги второго уровня игры:\n\tУ Вас кол-ва - " << userLevel << " жизни.";
//			std::cout << "\n\tУ Вас кол-ва - " << userLevel * 5 << " очков.";
//
//		}break;
//		case 2:
//		{
//			std::cout << "\n\tВыход с игры!";
//		}break;
//		default:
//		{
//			std::cout << "\n\tДанного пункт отсутствует в меню!";
//		}break;
//		}
//	} while (userCode != 3);
//	std::cout << "\n\tВыход с игры!";
//	return 0;
//}

///*В одномерном массиве, заполненном случайными числами,
//определить минимальный и максимальный элемент*/
//
//#include <iostream>
//#include <time.h>
//void main()
//{
//	setlocale(LC_ALL, "RU");
//	const int num = 10;
//	int number[num];
//	srand(time(NULL));
//	for (int ii = 0; ii < num; ii++)
//	{
//		number[ii] = rand() % 100;
//	}
//	int min = number[0], max = number[0];
//	for (int ii = 0; ii < num; ii++)
//	{
//		std::cout << ' ' << number[ii];
//		if (ii == 0 || number[ii] < min) min = number[ii];
//		if (ii == 0 || number[ii] > max) max = number[ii];
//	}
//	std::cout << "\n\tМинимальное число массива - " << min << "\n\tМаксимальное число массива - " << max;
//	std::cout << std::endl;
//	return;
//}

///*В одномерном массиве, заполненном случайными числами,
//определить минимальный и максимальный элемент*/
//
//#include <iostream>
//#include <time.h>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	srand(time(NULL));
//	const int num = 10;
//	int a, b, sum = 0, livel, mass[num];
//	std::cout << "\tВведите начало число диапозона - ";
//	std::cin >> a;
//	std::cout << "\tВведите конец число диапозона - ";
//	std::cin >> b;
//	std::cout << "\tВведите значение уровня - ";
//	std::cin >> livel;
//	for (int ii = 0; ii < num; ii++)
//	{
//		mass[ii] = a + rand() % (b - a);
//		std::cout << "\t" << mass[ii];
//	}
//	for (int ii = 0; ii < num; ii++)
//	{
//		if (mass[ii] < livel) sum += mass[ii];
//	}
//	std::cout << "\n\tЭлемент - " << sum << std::endl;
//
//	return 0;
//}

///*Пользователь вводит прибыль фирмы за год (12 месяцев).
//Затем пользователь вводит диапазон (например, 3 и 6 — поиск
//между 3-м и 6-м месяцем). Необходимо определить месяц,
//в котором прибыль была максимальна и месяц, в котором
//прибыль была минимальна с учетом выбранного диапазона*/
//#include <iostream>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	const int size = 12;
//	int profit[size], start, end, minMonth, maxMonth;
//	for (int ii = 0; ii < size; ii++)
//	{
//		std::cout << "\tВведите свою прибыль за - " << ii + 1 << " месяц - ";
//		std::cin >> profit[ii];
//	}
//	std::cout << "\n\tВведите начало интересующего вас периуд времени - ";
//	std::cin >> start;
//	std::cout << "\n\tВведите конец интересующего вас периуд времени - ";
//	std::cin >> end;
//	minMonth = start - 1;
//	maxMonth = end - 1;
//	for (int ii = start; ii <= end - 1; ii++)
//	{
//		if (profit[ii] > profit[maxMonth]) maxMonth = ii;
//		if (profit[ii] < profit[minMonth]) minMonth = ii;
//	}
//	std::cout << "\n\tПолучено минимальная прибыль " << minMonth + 1 << " - месяце";
//	std::cout << "\n\tПолучено максимальную прибыль " << maxMonth + 1 << " - месяце";
//	std::cout << std::endl;
//	return 0;
//}

///*В одномерном массиве, состоящем из N вещественных чисел вычислить:
//■ Сумму отрицательных элементов.
//■ Произведение элементов, находящихся между min и max элементами.
//■ Произведение элементов с четными номерами.
//■ Сумму элементов, находящихся между первым и последним отрицательными элементами.*/
//#include <iostream>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	const int size = 10;
//	int mass[size];
//	srand(time(NULL));
//
//	for (int ii = 0; ii < size; ii++)
//	{
//		mass[ii] = (rand() % 100) - 50;
//	}
//	for (int ii = 0; ii < size; ii++)
//	{
//		std::cout << "\n\tВвывод случайных числ: " << mass[ii];
//	}
//	std::cout << std::endl;
//	int negative;
//	for (int ii = 0; ii < size; ii++)
//	{
//		if (mass[ii] < 0)
//		{
//			negative = mass[ii];
//			std::cout << "\n\tВвывод отрицательных числ: " << negative;
//		}
//	}
//	std::cout << std::endl;
//	int min = 0, max = 0;
//	for (int ii = 0; ii < size; ii++)
//	{
//		if (mass[ii] < min) min = mass[ii];
//		if (mass[ii] > max) max = mass[ii];
//	}
//	int sum = 0;
//	for (int ii = 0; ii < size; ii++)
//	{
//		sum = mass[ii];
//		if (sum > min && sum < max)
//			std::cout << "\n\tВвывод находящихся между min и max элементами: " << mass[ii];
//	}
//	std::cout << "\n\n\tДля подсказки самый большой: " << max << " самый меньший: " << min;
//	std::cout << std::endl;
//	for (int ii = 0; ii < size; ii++)
//	{
//		if (mass[ii] % 2 == 0) std::cout << "\n\tВвывод с четными номерами: " << mass[ii];
//	}
//	std::cout << std::endl;
//	int sum0 = 1;
//	for (int ii = 0; ii < size; ii++)
//	{
//		if (mass[ii] < 0) min = mass[ii]; sum0 *= min; std::cout << "\n\tСумма для расшифровки: " << sum0;
//
//	}
//	std::cout << "\n\tСумму элементов, между первым и последним отрицательными элементами: " << sum0;
//	std::cout << std::endl;
//	return 0;
//}

//int main()
//{
//	/*Заполнить двухмерный массив случайными числами от 10 до 100.
//	 посчитать сумму элементов отдельно в каждой строке  и определить
//	 номер строки в которой сумма максимальная*/
//
//	setlocale(LC_ALL, "rus");
//	const int rows = 5;
//	const int colums = 5;
//	int arr[rows][colums] = {};
//	int arr_sum[rows] = {};
//	int Max_num_Row = 0;
//	srand(time(NULL));
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < colums; j++)
//		{
//			arr[i][j] = 10 + rand() % 90;
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << "__________________________________________" << endl;
//	cout << "Сумма элеменнтов в каждой строке : " << endl;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < colums; j++)
//		{
///			arr_sum[i] += arr[i][j];
///		}
//		cout << "Строка : [ " << i + 1 << " ]  " << arr_sum[i] << endl;
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		if (arr_sum[i] > arr_sum[Max_num_Row])
//		{
//			Max_num_Row = i;
//		}
//	}
//	cout << "Максимальное значение суммы находиться в строке под номером : " << Max_num_Row + 1 << endl;
//	return 0;
//}

//int arr2[rows] = {};
//int ans[rows] = {};
//int Max_num_Row = 0;
//srand(time(NULL));
//
//int temp = 0;
//int key;
//
//for (int i = 0; i < rows; i++)
//{
//	arr2[i] = 10 + rand() % 20;
//	cout << arr2[i] << "\t";
//}
//cout << "\nВведите искомое значение нашего ключа : " << endl;
//cin >> key;
//for (int i = 0; i < rows; i++)
//{
//	if (arr2[i] == key)
//	{
//		ans[temp++] = i;
//	}
//}
//if (temp != 0)
//{
//	for (int i = 0; i < temp; i++)
//	{
//		cout << "Наш ключ находиться в ячейке " << ans[i] << " со значением " << key << endl;
//	}
//}
//else
//{
//	cout << "В данном массиве мы не смогли найти указанный ключ " << key << " !!! \n";
//}

//for (int i = 0; i < rows; i++)
//{
//	arr2[i] = 10 + rand() % 20;
//	cout << arr2[i] << " ";
//}
//for (int i = 0; i < rows; i++)
//{
//	bool flag = true;
//	for (int j = 0; j < rows - (i + 1); j++)
//	{
//		if (arr2[j] > arr2[j + 1])
//		{
//			flag = false;
//			swap(arr2[j], arr2[j + 1]);
//			key++;
//			/* int temp = arr2[j];
//			 arr2[j] = arr2[j + 1];
//			 arr2[j + 1] = temp;*/
//		}
//	}
//	temp++;
//	if (flag)
//	{
//		break;
//	}
//}
//
//cout << "\n\nОтсортированный массив \n\n";
//for (int i = 0; i < rows; i++)
//{
//	cout << arr2[i] << " ";
//}
//cout << "\n Количество итераций " << key << " swap " << temp << " проход по массиву\n\n";

///*обучение с нуля*/
//#include <iostream>
//#include <ctime>
////using namespace std;
//int main()
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "RU"); // функция
//	//	cout << "Hello World!" << endl;
//	//	cout << "Привет!" << endl;
//
//	//	int a;
//		//std::cout << "Введите чисо - ";
//		//std::cin >> a;
//		//if (a%2==0)
//		//{
//		//	std::cout << "Ваше число - " << a << " четное!";
//		//}
//		//else
//		//{
//		//	std::cout << "Ваше число - " << a << " нечетное!";
//		//}
//		//std::cout << std::endl;
//		//while (a<=10)
//		//{
//		//	
//		//	if (a == 8)
//		//	{
//		//		std::cout << "\n(while) ";
//		//		a++;
//		//		continue;
//		//	}
//		//	std::cout << "\n(while) Число = " << a++;
//		//}
//		//std::cout << std::endl;
//		//do
//		//{
//		//	std::cout << "\n(do-while) Число = " << a++;
//		//	if (a==12)
//		//	{
//		//		a++;
//		//	}
//		//} while (a <=15);
//		//std::cout << std::endl;
//	//	std::cout << rand() % 10 - 10;
//
//	const int ROW = 5;
//	const int COL = 5;
//	int mass[ROW][COL] =
//	{
//		{},{},{}
//	};
//	int mass_sum[ROW]{};
//	for (int ii = 0; ii < ROW; ii++)
//	{
//		for (int jj = 0; jj < COL; jj++)
//		{
//			mass[ii][jj] = 10 + rand() % 100;
//			std::cout << mass[ii][jj] << "\t";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << "------------------------------------" << std::endl;
//
//	for (int ii = 0; ii < ROW; ii++)
//	{
//		for (int jj = 0; jj < COL; jj++)
//		{
//			mass_sum[ii] = mass_sum[ii] + mass[ii][jj];
//		}
//		std::cout << "Номер строки - " << ii + 1 << " сумма - " << mass_sum[ii] << std::endl;
//	}
//	int max_sum = 0;
//	for (int ii = 0; ii < ROW; ii++)
//	{
//		if (mass_sum[ii] > mass_sum[max_sum])
//		{
//			max_sum = ii;
//		}
//
//	}
//	max_sum++;
//	std::cout << "Summa max - " << max_sum << '\t';
//}

//#include <iostream>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	srand(time(NULL));
//	const int MASIW = 10;
//	int arr[MASIW]{};
//	int arr1[MASIW]{};
//	int arr2[MASIW]{};
//	for (int ii = 0; ii < MASIW; ii++)
//	{
//		arr[ii] = 10 + rand() % 30;
//		arr1[ii] = 10 + rand() % 30;
//		arr2[ii] = arr[ii] + arr1[ii];
//	}
//
//	int max = arr2[0], min = arr2[0], sum = 0;
//
//	for (int ii = 0; ii < MASIW; ii++)
//	{
//
//		if (min > arr2[ii]) min = arr2[ii];
//		if (max < arr2[ii]) max = arr2[ii];
//
//		sum = sum + arr2[ii];
//		std::cout << arr[ii] << ' ' << arr1[ii] << ' ' << arr2[ii] << std::endl;
//	}
//	std::cout << std::endl;
//	std::cout << "Сумма минимального числа -" << min << "\nСумма максимального числа -" << max
//		<< "\nСумма среднеарифмитического числа -" << (double)sum / MASIW << std::endl;
//}

///*Задание 5. Написать программу, которая выводит на
//экран:*/
//#include <iostream>
//int main ()
//{
//	std::cout << "\t    Hello World!\n";
//	std::cout << "\t/ Bjarne Stroustrup /";
//}

/*Задание 6. Написать программу, которая выводит на
экран:*/
//#include <iostream>
//int main() 
//{
//	std::cout << "\tHello World!\n";
//	std::cout << "\t\\\\Dennis Ritchi\\\\";
//}

/*Задание 7. Выведите следующий текст:*/
//#include <iostream>
//int main ()
//{
//	std::cout << "\tTo be, or not to be: that is the question:\n"
//		<< "\tWhether 'tis nobler in the mind to suffer\n"
//		<< "\tThe slings and arrows of outrageous fortune,\n"
//		<< "\tOr to take arms against a sea of troubles,\n"
//		<< "\tAnd by opposing end them?\n"
//		<< "\tWilliam Shakespeare.";
//	std::cout << std::endl;
//}

///*Задание 1. Создать приложение, которое выводит ин-
//формацию о книге, в следующем формате:*/
//#include <iostream>
//int main ()
//{
//	std::cout << "Name		:" << "\"The war and the peace\"\n"
//		<< "Avtor		:" << "L.N. Tolstoj\n"
//		<< "Izdatelstvo	:" << "Piter\n"
//		<< "Pages		:" << "500.";
//	std::cout << std::endl;
//	return 0;
//}

///*Задание 2. Создать приложение, которое выводит на
//кон соль фразу:
// Сопроводить каждую новую строчку тройным зву-
// ковым сигналом*/
//#include <iostream>
//int main ()
//{
//	std::cout << "\"U lukomor’a dub zelenij,\a\a\a\n"
//		<< "Zlataya zep na dupe tom,\a\a\a\n"
//		<< "I dnem i nochju kot uchenij\a\a\a\n"
//		<< "vse hodit po cepi krugom\a\a\a\"";
//	return 0;
//}

///*Задание 3. Создать приложение, которое выводит на
//экран следующую таблицу:
//
//: Подсказка:
//Рекомедуем выполнить следующий пример:
//cout<<"\n"<<(char)201<<(char)205<<
//(char)205<<(char)187;
//Необходимые символы находятся в дипазоне от 179
//до 218.*/
//#include <iostream>
//int main ()
//{
//    
//
//        std::cout << "\n" 
//            << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
//        std::cout << "\n"; 
//        std::cout << "\n" << (char)186; std::cout << " \t\t\t  Vremena  goda \t\t\t " << (char)186;
//        std::cout << "\n";
//        std::cout << "\n"
//            << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185;
//        std::cout << "\n";
//        std::cout << "\n" << (char)186; std::cout << "\t Zima \t" << (char)186; std::cout << "\t Vesna \t " << (char)186; std::cout << "\t Leto \t " << (char)186; 
//        std::cout << "\t Osen \t " << (char)186;
//        std::cout << "\n";
//        std::cout << "\n"
//            << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205
//            << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
//        std::cout << std::endl;
//        return 0;
//}

///*от 19.11	Разобрать алгоритм сортировки пузырьком, в качестве решения прислать
//скриншот отсортированного массива.*/
//#include <iostream>
//int main()
//{
//	const int SIZE = 10;
//	int arr[SIZE]{}, temp = 0;
//	for (int ii = 0; ii < SIZE; ii++)
//	{
//		arr[ii] = rand() % 20;
//	}
//	for (int ii = 0; ii < SIZE; ii++)
//	{
//		for (int jj = 0; jj < SIZE; jj++)
//		{
//			if (arr[jj] < arr[jj + 1])
//			{
//				temp = arr[jj];
//				arr[jj] = arr[jj + 1];
//				arr[jj + 1] = temp;
//			}
//		}
//	}
//	for (int ii = 0; ii < SIZE; ii++)
//	{
//		std::cout << "Number arr: " << arr[ii] << std::endl;
//	}
//	return 0;
//}
//

//#include <iostream>
//
//
//int size(int a = 5)
//{
//	a++;
//	return 0;
//}
//
//int main ()
//{
//	std::cout << size();
//}

///*от 19.11	Разобрать алгоритм сортировки пузырьком, в качестве решения прислать
//скриншот отсортированного массива.*/
//#include <iostream>
//int main()
//{
//	const int SIZE = 10;
//	int arr[SIZE]{}, temp = 0;
//	for (int ii = 0; ii < SIZE; ii++)
//	{
//		arr[ii] = rand() % 20;
//	}
//	for (int ii = 0; ii < SIZE; ii++)
//	{
//		for (int jj = 0; jj < SIZE - (ii +1); jj++)
//		{
//			if (arr[jj] < arr[jj + 1])
//			{
//				temp = arr[jj];
//				arr[jj] = arr[jj + 1];
//				arr[jj + 1] = temp;
//			}
//		}
//	}
//	for (int ii = 0; ii < SIZE; ii++)
//	{
//		std::cout << "Number arr: " << arr[ii] << std::endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//enum Arry_const
//{
//    rows = 10, colums = 10
//};
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    srand(time(NULL));
//    int arry[rows] = {};
//    for (int i = 0; i < rows; i++)
//    {
//        arry[i] = 10 + rand() % 20;
//        cout << arry[i] << " ";
//    }
//    //////Insertion Sort //////////////////////////////
//    //int temp, index_item;
//    //for (int i = 1; i < rows; i++)
//    //{
//    //    temp = arry[i];
//    //    index_item = i - 1;
//    //    while (index_item >= 0 && arry[index_item] > temp)
//    //    {
//    //        arry[index_item + 1] = arry[index_item];
//    //        arry[index_item] = temp;
//    //        index_item--;
//    //    }
//    //}
//
//    cout << "\n Отсортированный массив \n\n";
//    for (int i = 0; i < rows; i++)
//    {
//        cout << arry[i] << " ";
//    }
//    cout << "\n\n";
//}

//#include <iostream>
//#include <time.h>
//
//int May_function()
//{
//	setlocale(LC_ALL, "RU");
//	srand(time(NULL));
//	const int MASIW = 10;
//	int arr[MASIW]{};
//	int arr1[MASIW]{};
//	int arr2[MASIW]{};
//	for (int ii = 0; ii < MASIW; ii++)
//	{
//		arr[ii] = 10 + rand() % 30;
//		arr1[ii] = 10 + rand() % 30;
//		arr2[ii] = arr[ii] + arr1[ii];
//	}
//
//	int max = arr2[0], min = arr2[0], sum = 0;
//
//	for (int ii = 0; ii < MASIW; ii++)
//	{
//
//		if (min > arr2[ii]) min = arr2[ii];
//		if (max < arr2[ii]) max = arr2[ii];
//
//		sum = sum + arr2[ii];
//		std::cout << arr[ii] << ' ' << arr1[ii] << ' ' << arr2[ii] << std::endl;
//	}
//	std::cout << std::endl;
//	std::cout << "Сумма минимального числа -" << min << "\nСумма максимального числа -" << max
//		<< "\nСумма среднеарифмитического числа -" << (double)sum / MASIW << std::endl;
//	return 0;
//}
//
//int main()
//{
//	May_function();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//// template -> определение шаблона
//// <typename T> -> тип данных который будет использовать наш шаблон
//auto add(const auto a, const auto b)
//{
//	return a + b;
//}
//
//template<typename T1, typename T2, typename T3> decltype(auto) ABS(T1 N, T2 M, T3 C)
//{
//	//return N < 0 ? -N : N;
//	return (N / M) / C;
//}
//
////int ABS(int N)
////{
////	return N < 0 ? -N : N;
////}
////double ABS(double N)
////{
////	return N < 0 ? -N : N;
////}
//
//int main()
//{
//	const int m = 3;
//	const int r = 9;
//	auto k = add(m, r);
//	cout << k << endl;
//	const double m1 = 3.3;
//	const double r2 = 9.016;
//	cout << add(m1, r2) << endl;
//	auto n = ABS(15, 15.2, 0.5);
//	cout << n << endl;
//	//cout << ABS(15,15,15) << endl;
//	//cout << ABS(0.15) << endl;
//}

//#include <iostream>
//using namespace std;
//int recur(int num)
//{
//	cout << "Спуск по рекурсии: " << num << endl;
//	if (num > 0)
//	{
//		recur(num - 1);
//	}
//	cout << "Подъём по рекурсии: " << num << endl;
//
//	return 0;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	recur(10);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	long double a = 0;
//	cout << sizeof(a) << endl;
//	return 0;
//}

///*от 25.11 Передать при помощи функций !!!
//(Объявить три массива. Первые два заполнить случайными значениями от 10 до 30.
//В элементы третьего массива записать сумму соответствующих элементов
//первых двух массивов. (в нулевую ячейку третьего – сумму нулевых ячеек первого и
//второго массивов и так далее). Затем найти среднее арифметическое элементов
//третьего массива, максимальное значение и минимальное значение, которые он хранит.)*/
//#include <iostream>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	const int SIZE = 10;
//	int arr01[SIZE]{}, arr02[SIZE]{}, arr03[SIZE]{};
//
//	for (int ii = 0; ii < SIZE; ii++)
//	{
//		arr01[ii] = 10 + rand() % 30;
//		arr02[ii] = 10 + rand() % 30;
//		arr03[ii] = arr01[ii] + arr02[ii];
//	}
//	int max = arr03[0], min = arr03[0], sum = arr03[0];
//	for (int jj = 0; jj < SIZE; jj++)
//	{
//		if (min > arr03[jj]) min = arr03[jj];
//		if (max < arr03[jj]) max = arr03[jj];
//		sum = sum + arr03[jj];
//		std::cout << "\t" << arr01[jj] << ' ' << arr02[jj] << ' ' << arr03[jj] << std::endl;
//	}
//	std::cout << std::endl;
//	std::cout << "\n\tСумма максимального значение - " << max << "\n\tСумма минимального значение - "
//		<< min << "\n\tCумма среднее арифметическое значение - " << sum / SIZE;
//	std::cout << std::endl;
//	return 0;
//}

///*от 09.12
//    Отрефакторить код "Быстрой сортировки" расмотренный на паре.*/
//
//#include <iostream>
//
//void sortRecursive(int* mas, int size)
//{
//    //Указатели в начало и в конец массива
//    int ii = 0;
//    int jj = size - 1;
//
//    //Центральный элемент массива
//    int mid = mas[size / 2];
//
//    //Делим массив
//    do {
//        //Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
//        //В левой части массива пропускаем (оставляем на месте) элементы, которые меньше центрального
//        while (mas[ii] < mid) {
//            ii++;
//        }
//        //В правой части пропускаем элементы, которые больше центрального
//        while (mas[jj] > mid) {
//            jj--;
//        }
//
//        //Меняем элементы местами
//        if (ii <= jj) {
//            int tmp = mas[ii];
//            mas[ii] = mas[jj];
//            mas[jj] = tmp;
//
//            ii++;
//            jj--;
//        }
//    } while (ii <= jj);
//    std::cout << ii << ' ' << jj << std::endl;
//
//    //Рекурсивные вызовы, если осталось, что сортировать
//    if (jj > 0) {
//        //"Левый кусок"
//        sortRecursive(mas, jj + 1);
//    }
//    if (ii < size) {
//        //"Првый кусок"
//        sortRecursive(&mas[ii], size - ii);
//    }
//}


//#include <iostream>
//#define UPPER_LEFT_ANGLE		(char)218
//#define UPPER_RINGHT_ANGLE		(char)191
//#define LOWER_LEFT_ANGLE		(char)192
//#define LOWER_RIGHT_ANGLE		(char)217
//#define HORIZONTAL_LINE			(char)196 << (char)196
//#define VERTICAL_LINE			(char)179
//#define WHITE_BOX				"\xDB\xDB" //(char)219 << (char)219
//#define BLACK_BOX				"\x20\x20"
//#define ASCII
////Escape - последователность \хСС позволяет в состав строковой константы включить символ по ASCII - где СС - это шестнадцатитиричный 
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	//int a;
//	//std::cout << "\nВведите количество значение - ";
//	//std::cin >> a;
//	//for (int ii = 0; ii < a; ii++)
//	//{
//	//	for (int jj = 0; jj < a; jj++)
//	//	{
//	//		std::cout << (ii % 2 == jj % 2 ? " + " : " - ");
//	//	}
//	//	std::cout << std::endl;
//	//}
//
//	int a;
//	std::cout << "\nВведите количество значение - ";
//	std::cin >> a; a++;
//	setlocale(LC_ALL, "C");
//	for (int ii = 0; ii <= a; ii++)
//	{
//		for (int jj = 0; jj <= a; jj++)
//		{
//			if (ii == 0 && jj == 0) std::cout << UPPER_LEFT_ANGLE;
//			else if (ii == 0 && jj == a) std::cout << UPPER_RINGHT_ANGLE;
//			else if (ii == a && jj == 0) std::cout << LOWER_LEFT_ANGLE;
//			else if (ii == a && jj == a) std::cout << LOWER_RIGHT_ANGLE;
//			else if (ii == 0 || ii == a) std::cout << HORIZONTAL_LINE;
//			else if (jj == 0 || jj == a) std::cout << VERTICAL_LINE;
//			else std::cout << (ii % 2 == jj % 2 ? WHITE_BOX : BLACK_BOX);
//			//else if (ii % 2 == jj % 2)	 std::cout << WHITE_BOX;
//			//else						 std::cout << BLACK_BOX;
//		}
//		std::cout << std::endl;
//	}
//	return 0;
//}


//#ifdef DEBUG
////	std::cout << TAB << "English.\n";
////	std::cout << TAB << sizeof(int);
////	std::cout << std::endl;
////	int a, b;
////	std::cout << "Введите число - "; std::cin >> a;
////	b = a % 10;
////	std::cout << TAB << b << std::endl;
////	std::cout << TAB << 17 / 5 << std::endl;
////	std::cout << TAB << 11 % 5 << std::endl;
////	std::cout << TAB << 3 / 5 << std::endl;  
//
////	int a, c;
////	char b;
////	std::cout << TAB << "Введите врожение - ";
////	std::cin >> a >> b >> c;
//#endif // DEBUG
//#ifdef CALC
//
//
//
//if (b == '+')
//{
//	std::cout << TAB << a << " + " << c << " = ";
//	std::cout << a + c << std::endl;
//}
//else if (b == '-')
//{
//	std::cout << TAB << a << " - " << c << " = ";
//	std::cout << a - c << std::endl;
//}
//else if (b == '*')
//{
//	std::cout << TAB << a << " * " << c << " = ";
//	std::cout << a * c << std::endl;
//}
//else if (b == '/')
//{
//	std::cout << TAB << a << " / " << c << " = ";
//	std::cout << a / c << std::endl;
//
//}
//#endif // CALC
//
//#ifdef SWICH
//
//
//
//switch (b)
//{
//case'+':std::cout << a << " + " << c << " = " << a + c; break;
//case'-':std::cout << a << " - " << c << " = " << a - c; break;
//case'*':std::cout << a << " * " << c << " = " << a * c; break;
//case'/':std::cout << a << " / " << c << " = " << a / c; break;
//default: std::cout << "Не выбрано условие."; break;
//}
//#endif // SWICH
//
////	std::cout << !true << " - " << true << std::endl;

//#include <iostream>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int number, temp;
//	std::cout << "Введите количество строк - ";
//	std::cin >> number;
//	for (int ii = 0; ii <= number; ii++)
//	{
//		for (int jj = 1; jj <= number - ii; jj++)std::cout << "  ";
//
//		for (int kk = 0; kk <= ii; kk++)
//		{
//			if (kk == 0 || ii == 0)temp = 1;
//			else temp = temp * (ii - kk + 1) / kk;
//			std::cout << temp << "   ";
//		}
//		std::cout << std::endl;
//	}
//	return 0;
//}

/*Реализовать программу расчета заказа в кафетерии при условии,
что заказ может быть на несколько человек и каждый клиент формирует
свою часть заказа. Необходимо спросить у пользователя на сколько
человек заказ. Далее каждому человеку выводиться меню (названия
напитков, кондитерских изделий и их цена) и он выбирает. Предусмотреть
возможность выбора нескольких элементов меню для клиента, если он
желает добавить еще что-то в свой заказ. Результат работы программы
— итоговая сумма общего заказа всей компании*/

//#include <iostream>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int usercode, code0, code1, code2, code3, code4, code5;
//	int unitSalat, unitDish1, unitDish2, unitDrink, unitDessert;
//	double sumtotal = 0, sumSalat = 0, sumDish1 = 0, sumDish2 = 0, sumDrink = 0, sumDessert = 0;
//
//	enum MenuSalat { Salat1, Salat2, Salat3, Salat4, Salat5 };
//	const int nSalat = MenuSalat::Salat5 + 1;
//	const char* nameSalat[nSalat]{ "1. Овощной", "2. Оливье", "3. Цезарь", "4. Мимоза",
//		"5. Мясной" };
//	double arr1[nSalat]{ 50.15, 50.2, 50.35, 50.42, 50.52 };
//
//	enum MenuDish1 { Dish1_1, Dish1_2, Dish1_3, Dish1_4, Dish1_5 };
//	const int nDish1 = MenuDish1::Dish1_5 + 1;
//	const char* nameDish1[nDish1]{ "1. Шурпа", "2. Свекольник", "3. Кабачковый суп",
//		"4. Лагман узбекский", "5. Суп гуляш" };
//	double arr2[nDish1]{ 100.2, 100.3, 100.35, 100.42, 100.52, };
//
//	enum MenuDish2 { Dish2_1, Dish2_2, Dish2_3, Dish2_4, Dish2_5 };
//	const int nDish2 = MenuDish2::Dish2_5 + 1;
//	const char* nameDish2[nDish2]{ "1. Пельмени с грибами", "2. Картофель с капустой",
//		"3. Фрикасе из кролика", "4. Курица в паприке", "5. Креветки на шпажках" };
//	double arr3[nDish2]{ 200.35, 200.40, 200.45, 200.50, 200.60 };
//
//	enum MenuDrink { Drink1, Drink2, Drink3, Drink4, Drink5 };
//	const int nDrink = MenuDrink::Drink5 + 1;
//	const char* nameDrink[nDrink]{ "1. Ворониха", "2. Настойка на бруснике", "3. Лимонная настойка",
//		"4. Рисовый квас", "5. Шоколадный ликер" };
//	double arr4[nDrink]{ 40.05, 40.25, 40.30, 40.45, 40.55 };
//
//	enum MenuDessert { Dessert1, Dessert2, Dessert3, Dessert4, Dessert5 };
//	const int nDessert = MenuDessert::Dessert5 + 1;
//	const char* nameDessert[nDessert]{ "1. Фисташковое мороженое", "2. Имбирный мармелад",
//		"3. Заварная пасха", "4. Цукаты из айвы", "5. Клубника в шоколаде" };
//	double arr5[nDessert]{ 80.05, 80.2, 80.35, 80.42, 80.52 };
//
//	std::cout << "\n\tДобро пожаловать в кафе \"Фламинго\"\n";
//	std::cout << "\tУкажите количество персон для заказа - ";
//	std::cin >> usercode;
//	for (int ii = 1; ii <= usercode; ++ii)
//	{
//		do
//		{
//			std::cout << "--------------------------------------------------------\n";
//			std::cout << "\tПринемается заказ для персона - " << ii;
//			std::cout << "\n\tВы в главном меню заведение.\n";
//			std::cout << "\t1. Салаты.\n";
//			std::cout << "\t2. Первое блюдо.\n";
//			std::cout << "\t3. Второе блюдо.\n";
//			std::cout << "\t4. Напитки.\n";
//			std::cout << "\t5. Десерты.\n";
//			std::cout << "\t6. Выход с меню.\n";
//			std::cout << "\tВведите код выбранного меню - ";
//			std::cin >> code0;
//			switch (code0)
//			{
//			case 1:
//				std::cout << "--------------------------------------------------------\n";
//				for (int jj = 0; jj < 5; jj++)
//				{
//					std::cout << "\t" << nameSalat[jj] << ' ' << arr1[jj] << "-рублей\n";
//				}
//				std::cout << "\t6. Завершение выбора.\n";
//				std::cout << "\tВведите код действие или выбрераемого продукта - ";
//				std::cin >> code1;
//				if (code1 <= 5)
//				{
//					std::cout << "\n\tВведите количество продукта - ";
//					std::cin >> unitSalat;
//					sumSalat = arr1[--code1] * unitSalat;
//					std::cout << "\tСумма холодного цеха " << sumSalat;
//				}
//			case 2:
//				std::cout << "\n--------------------------------------------------------\n";
//				for (int kk = 0; kk < 5; kk++)
//				{
//					std::cout << "\t" << nameDish1[kk] << ' ' << arr2[kk] << "-рублей\n";
//				}
//				std::cout << "\t6. Завершение выбора.\n";
//				std::cout << "\tВведите код действие или выбрераемого продукта - ";
//				std::cin >> code2;
//				if (code2 <= 5)
//				{
//					std::cout << "\n\tВведите количество продукта - ";
//					std::cin >> unitDish1;
//					sumDish1 = arr2[--code2] * unitDish1;
//					std::cout << "\tСумма первого блюдо " << sumDish1;
//				}
//			case 3:
//				std::cout << "\n--------------------------------------------------------\n";
//				for (int ll = 0; ll < 5; ll++)
//				{
//					std::cout << "\t" << nameDish2[ll] << ' ' << arr3[ll] << "-рублей\n";
//				}
//				std::cout << "\t6. Завершение выбора.\n";
//				std::cout << "\tВведите код действие или выбрераемого продукта - ";
//				std::cin >> code3;
//				if (code3 <= 5)
//				{
//					std::cout << "\n\tВведите количество продукта - ";
//					std::cin >> unitDish2;
//					sumDish2 = arr3[--code3] * unitDish2;
//					std::cout << "\tСумма второго блюдо " << sumDish2;
//				}
//			case 4:
//				std::cout << "\n--------------------------------------------------------\n";
//				for (int hh = 0; hh < 5; hh++)
//				{
//					std::cout << "\t" << nameDrink[hh] << ' ' << arr4[hh] << "-рублей\n";
//				}
//				std::cout << "\t6. Завершение выбора.\n";
//				std::cout << "\tВведите код действие или выбрераемого продукта - ";
//				std::cin >> code4;
//				if (code4 <= 5)
//				{
//					std::cout << "\n\tВведите количество продукта - ";
//					std::cin >> unitDrink;
//					sumDrink = arr4[--code4] * unitDrink;
//					std::cout << "\tСумма напитков " << sumDrink;
//				}
//			case 5:
//				std::cout << "\n--------------------------------------------------------\n";
//				for (int gg = 0; gg < 5; gg++)
//				{
//					std::cout << "\t" << nameDessert[gg] << ' ' << arr5[gg] << "-рублей\n";
//				}
//				std::cout << "\t6. Завершение выбора.\n";
//				std::cout << "\tВведите код действие или выбрераемого продукта - ";
//				std::cin >> code5;
//				if (code5 <= 5)
//				{
//					std::cout << "\n\tВведите количество продукта - ";
//					std::cin >> unitDessert;
//					sumDessert = arr5[--code5] * unitDessert;
//					std::cout << "\tСумма десертов " << sumDessert;
//				}
//			default:
//				break;
//			}
//
//		} while (code0 < 6);
//		sumtotal = sumSalat + sumDish1 + sumDish2 + sumDrink + sumDessert;
//		std::cout << "\n\tПринято заказ для персона - " << ii << " на сумму - " << sumtotal;
//		std::cout << std::endl;
//	}
//	return 0;
//}

//#include <iostream>
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int gust, numberP, numberD, tempP = 0, tempD = 0, total = 0, totalT = 0;
//	const int TEMP = 4;
//	int arrT[TEMP]{ 0,0,0,0 };
//	enum MenuName_Pizzi { Pizza0, Pizza1, Pizza2, Pizza3 };
//	const int nPizza = MenuName_Pizzi::Pizza3 + 1;
//	const char* name_Pizza[nPizza]{ "Мазерати", "Попирания", "Милано", "Рио" };
//	double Sum_Pizza[nPizza]{ 250,230,240,220 };
//
//	enum MenuName_Drink { Drink0, Drink1, Drink2, Drink3 };
//	const int nDrink = MenuName_Drink::Drink3 + 1;
//	const char* name_Drink[nDrink]{ "Коко-кола", "Пепси кола", "Мандарин", "Яблоко" };
//	double Sum_Drink[nDrink]{ 55,35,45,25 };
//
//	std::cout << "Добро пожаловать в кафе \"Быстро\"\n";
//	std::cout << "Пожалуйста укажите кол-ва персон - "; std::cin >> gust;
//	for (int ii = 1; ii <= gust; ii++)
//	{
//		std::cout << "\nСделайте выбор для персоны - " << ii;
//		std::cout << "\nВ нашем кафе, есть пиццы: \n";
//		for (int jj = 0; jj < nPizza; jj++)
//			std::cout << jj + 1 << ". " << name_Pizza[jj] << " " << Sum_Pizza[jj] << "-рублей.\n";
//
//		std::cout << "\nСделайте свой выбор, введите код пиццы - "; std::cin >> numberP;
//		for (int kk = numberP - 1; kk <= numberP - 1; kk++)
//		{
//			std::cout << "Вы выбрали пиццу - " << name_Pizza[kk] << " " << Sum_Pizza[kk] << "-рублей.";
//			arrT[ii] = Sum_Pizza[kk];
//		}
//
//		std::cout << "\nВ нашем кафе, есть напитки: \n";
//		for (int kk = 0; kk < nDrink; kk++)
//			std::cout << kk + 1 << ". " << name_Drink[kk] << " " << Sum_Drink[kk] << "-рублей.\n";
//
//		std::cout << "\nСделайте свой выбор, введите код напитка - "; std::cin >> numberD;
//		for (int ll = numberD - 1; ll <= numberD - 1; ll++)
//		{
//			std::cout << "Вы выбрали напиток - " << name_Drink[ll] << " " << Sum_Drink[ll] << "-рублей.";
//			arrT[ii] = Sum_Drink[ll];
//		}
//		for (int qq = 0; qq < TEMP; qq++)
//		{
//			if (TEMP > 1)
//			{
//				total = arrT[qq];
//			}
//		}
//
//		std::cout << "\nСумма для персоны " << ii << " составляет - " << total << "-рублей.";
//		std::cout << std::endl;
//
//
//	}
//
//	std::cout << "\nСумма всего заказа - " << total;
//
//
//
//}


