#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<time.h>

using namespace std;
using namespace sf;
bool ch = false, swap2 = false; int c5 = 0;
struct player
{
	int score = 0;
	string name;
};

int Score(int arr[9][9], int &score)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == -3)
				score += 10;
		}
	}
	return score;
}

void startMenu(RectangleShape &backGround, RenderWindow &window, Texture &bg, bool music)
{
	if (music)
		bg.loadFromFile("main.png"); // upload the background
	else bg.loadFromFile("mainof.png");
	//if ((float)mousepos.x)
	//--------adding the images to the textures----------
	Texture t1, t2;
	RectangleShape rpic1(Vector2f(200.0f, 50.0f));
	RectangleShape rpic2(Vector2f(200.0f, 50.0f));
	t1.loadFromFile("play.jpg");
	t2.loadFromFile("about.jpg");
	backGround.setTexture(&bg);
	rpic1.setTexture(&t1);
	rpic2.setTexture(&t2);
	float a = -60;
	while (true)
	{
		if (a <= 30)
		{

			rpic1.setPosition(a, 100);
			rpic2.setPosition(a, 200);
		}
		else break;
		a += 0.03;
		window.draw(backGround);
		window.draw(rpic1);
		window.draw(rpic2);
		window.display();
	}


	//window.draw(backGround);
	//window.display(); // draw and display the background

}

void levels(RectangleShape &backGround2, RenderWindow &window, Texture &level)
{
	RectangleShape rpic1(Vector2f(200.0f, 50.0f));
	RectangleShape rpic2(Vector2f(200.0f, 50.0f));
	RectangleShape rpic3(Vector2f(200.0f, 50.0f));
	RectangleShape rpic4(Vector2f(200.0f, 50.0f));
	RectangleShape rpic5(Vector2f(200.0f, 50.0f));
	RectangleShape rpic6(Vector2f(200.0f, 50.0f));
	
	level.loadFromFile("main.png");
	Texture b1, b2, b3, b4, b5,b6;
	b1.loadFromFile("l1.jpg");
	b2.loadFromFile("l2.jpg");
	b3.loadFromFile("l3.jpg");
	b4.loadFromFile("l4.jpg");
	b5.loadFromFile("l5.jpg");
	b6.loadFromFile("bb.jpg");
	rpic1.setTexture(&b1);
	rpic2.setTexture(&b2);
	rpic3.setTexture(&b3);
	rpic4.setTexture(&b4);
	rpic5.setTexture(&b5);
	rpic6.setTexture(&b6);
	float a = -60, b = 900, c = 900;
	backGround2.setTexture(&level);
	while (true)
	{
		if (a <= 30)
		{

		rpic1.setPosition(a, 100);
		rpic2.setPosition(a, 200);
		rpic3.setPosition(a, 300);
		rpic4.setPosition(a, 400);
		rpic5.setPosition(a, 500);
		rpic6.setPosition(a, 0);
		//if (b >= 750)
		}
			//rpic2.setPosition(b, 470);

		else break;
		a += 0.03;
		b -= 0.02;
	    window.draw(backGround2);
		window.draw(rpic1);
		window.draw(rpic2);
		window.draw(rpic3);
		window.draw(rpic4);
		window.draw(rpic5);
		window.draw(rpic6);
		window.display();
	}
}
void level1(RectangleShape & B_G_L3, RenderWindow & window, int o)
{
	Texture pic1, pic2,pic12,pic13, level3,t1,t2,t3;
	RectangleShape rpic1(Vector2f(150.0f, 200.0f));
	RectangleShape rpic2(Vector2f(150.0f, 180.0f));
	RectangleShape rpic3(Vector2f(200.0f, 100.0f));
	RectangleShape rpic4(Vector2f(200.0f, 100.0f));
	RectangleShape rpic6(Vector2f(200.0f, 100.0f));
	RectangleShape rpic5(Vector2f(650.0f, 500.0f));
	level3.loadFromFile("level3/backkkk.png");
	B_G_L3.setTexture(&level3);
	pic1.loadFromFile("level3/red1.png");
	rpic1.setTexture(&pic1);
	pic2.loadFromFile("Eva.png");
	rpic2.setTexture(&pic2);
	pic12.loadFromFile("level3/red2.png");
	pic13.loadFromFile("level3/red3.png");
	t1.loadFromFile("level3/black3.png");
	t2.loadFromFile("level3/rectangelexit.png");
	t3.loadFromFile("level3/Rectangelcandys.png");
	rpic3.setTexture(&t1);
	rpic6.setTexture(&t1);
	rpic4.setTexture(&t2);
	rpic5.setTexture(&t3);
	window.clear();
	float a = -20, b = 900, c = -50,R=900,l=-100;
	int x = 0;
	if (o == 0)
		while (true)
		{
			if (a <= 20)
			{
				rpic1.setPosition(a, 430);
				if (x % 2 == 0)
				rpic1.setTexture(&pic12);
				if (x % 3 == 0)
					rpic1.setTexture(&pic13);
				if (x % 4 == 0)
					rpic1.setTexture(&pic1);
			}
			if (b >= 750)
				rpic2.setPosition(b, 430);
			if (R >= 700)
				rpic4.setPosition(R, 0);
			if (c <= 150)
			{
				rpic3.setPosition(700, c);
				rpic6.setPosition(700, c + 150);
			}
			/*if (l <= 200)
				rpic5.setPosition(50, l);*/
			else break;
			a += 0.01;
			b -= 0.05;
			c += 0.03;
			R -= 0.05;
			l += 0.05;
			x++;
			window.draw(B_G_L3);
			//window.draw(rpic5);
			window.draw(rpic1);
			window.draw(rpic2);
			window.draw(rpic3);
			window.draw(rpic4);
			window.draw(rpic6);
			window.display();
		}
	else
	{
		rpic1.setPosition(20, 405);
		rpic2.setPosition(750, 430);
		rpic4.setPosition(700, 0);
		rpic3.setPosition(700, 150);
		rpic6.setPosition(700,  300);
		window.draw(B_G_L3);
		window.draw(rpic1);
		window.draw(rpic2);
		window.draw(rpic3);
		window.draw(rpic4);
	//	window.draw(rpic5);
		window.draw(rpic6);
		window.display();
	}
}
void level5(RectangleShape & B_G_L3, RenderWindow & window, int o)
{
	Texture pic1, pic2, pic12, pic13, level3, t1, t2, t3;
	RectangleShape rpic1(Vector2f(150.0f, 200.0f));
	RectangleShape rpic2(Vector2f(150.0f, 180.0f));
	RectangleShape rpic3(Vector2f(200.0f, 150.0f));
	RectangleShape rpic4(Vector2f(200.0f, 150.0f));
	RectangleShape rpic6(Vector2f(200.0f, 150.0f));
	RectangleShape rpic5(Vector2f(650.0f, 500.0f));
	level3.loadFromFile("level5/dashiana-portfolio-ab-star-wars-lothal-1000.png");
	B_G_L3.setTexture(&level3);
	pic1.loadFromFile("level3/red1.png");
	rpic1.setTexture(&pic1);
	pic2.loadFromFile("Eva.png");
	rpic2.setTexture(&pic2);
	pic12.loadFromFile("level3/red2.png");
	pic13.loadFromFile("level3/red3.png");
	t1.loadFromFile("level5/rectangle.png");
	t2.loadFromFile("level5/rectangleexit.png");
	t3.loadFromFile("level5/Rectangelcandys.png");
	rpic3.setTexture(&t1);
	rpic6.setTexture(&t1);
	rpic4.setTexture(&t2);
	rpic5.setTexture(&t3);
	window.clear();
	float a = -20, b = 900, c = -50, R = 900, l = -100;
	int x = 0;
	if (o == 0)
		while (true)
		{
			if (a <= 20)
			{
				rpic1.setPosition(a, 430);
				if (x % 2 == 0)
					rpic1.setTexture(&pic12);
				if (x % 3 == 0)
					rpic1.setTexture(&pic13);
				if (x % 4 == 0)
					rpic1.setTexture(&pic1);
			}
			if (b >= 750)
				rpic2.setPosition(b, 430);
			if (R >= 700)
				rpic4.setPosition(R, 0);
			if (c <= 150)
			{
				rpic3.setPosition(700, c);
				rpic6.setPosition(700, c + 150);
			}
			/*if (l <= 200)
				rpic5.setPosition(50, l);*/
			else break;
			a += 0.01;
			b -= 0.05;
			c += 0.03;
			R -= 0.05;
			l += 0.05;
			x++;
			window.draw(B_G_L3);
			//window.draw(rpic5);
			window.draw(rpic1);
			window.draw(rpic2);
			window.draw(rpic3);
			window.draw(rpic4);
			window.draw(rpic6);
			window.display();
		}
	else
	{
		rpic1.setPosition(20, 405);
		rpic2.setPosition(750, 430);
		rpic4.setPosition(700, 0);
		rpic3.setPosition(700, 150);
		rpic6.setPosition(700, 300);
		window.draw(B_G_L3);
		window.draw(rpic1);
		window.draw(rpic2);
		window.draw(rpic3);
		window.draw(rpic4);
		//	window.draw(rpic5);
		window.draw(rpic6);
		window.display();
	}
}


void level2(RectangleShape & B_G_L3, RenderWindow & window, int o)
{
	Texture pic1, pic2, level3;
	RectangleShape rpic1(Vector2f(150.0f, 200.0f));
	RectangleShape rpic2(Vector2f(150.0f, 180.0f));
	level3.loadFromFile("level2background.jpg");
	B_G_L3.setTexture(&level3);
	pic1.loadFromFile("Edward.png");
	rpic1.setTexture(&pic1);
	pic2.loadFromFile("Eva.png");
	rpic2.setTexture(&pic2);
	window.clear();
	float a = -20, b = 900, c = 900;
	if (o == 0)
		while (true)
		{
			if (a <= 20)
				rpic1.setPosition(a, 405);
			if (b >= 750)
				rpic2.setPosition(b, 430);

			else break;
			a += 0.2;
			b -= 0.3;
			window.draw(B_G_L3);
			window.draw(rpic1);
			window.draw(rpic2);
			window.display();
		}
	else
	{
		rpic1.setPosition(20, 405);
		rpic2.setPosition(750, 430);
		window.draw(B_G_L3);
		window.draw(rpic1);
		window.draw(rpic2);
		window.display();
	}
}
void level3(RectangleShape & B_G_L3, RenderWindow & window, int o)
{
	RectangleShape rpic1(Vector2f(150.0f, 150.0f));
	RectangleShape rpic2(Vector2f(150.0f, 150.0f));
	Texture level3, pic1, pic2;
	level3.loadFromFile("backgroundlev3.jpg");
	B_G_L3.setTexture(&level3);
	pic1.loadFromFile("angry-clipart-499.png");
	rpic1.setTexture(&pic1);
	pic2.loadFromFile("angry-bird-blacke-icon.png");
	rpic2.setTexture(&pic2);
	window.clear();
	float a = -20, b = 900, c = 900;
	if (o == 0)
		while (true)
		{
			if (a <= 45)
				rpic1.setPosition(a, 480);
			if (b >= 730)
				rpic2.setPosition(b, 470);

			else break;
			a += 0.2;
			b -= 0.3;
			window.draw(B_G_L3);
			window.draw(rpic1);
			window.draw(rpic2);
			window.display();
		}
	else
	{
		rpic1.setPosition(45, 480);
		rpic2.setPosition(730, 470);
		window.draw(B_G_L3);
		window.draw(rpic1);
		window.draw(rpic2);
		window.display();
	}


}
void level4(RectangleShape & B_G_L4, RenderWindow & window, int o)
{
	RectangleShape rpic1(Vector2f(150.0f, 150.0f));
	RectangleShape rpic2(Vector2f(150.0f, 150.0f));
	Texture level4, pic1, pic2;
	level4.loadFromFile("bcl4.png");
	B_G_L4.setTexture(&level4);
	pic1.loadFromFile("vulture-vector-angry-6.png");
	rpic1.setTexture(&pic1);
	pic2.loadFromFile("source-clipart-movie-character-8.png");
	rpic2.setTexture(&pic2);
	window.clear();
	float a = -20, b = 900, c = 900;
	if (o == 0)
		while (true)
		{
			if (a <= 0)
				rpic1.setPosition(a, 480);
			if (b >= 750)
				rpic2.setPosition(b, 470);

			else break;
			a += 0.2;
			b -= 0.3;
			window.draw(B_G_L4);
			window.draw(rpic1);
			window.draw(rpic2);
			window.display();
		}
	else
	{
		rpic1.setPosition(0, 480);
		rpic2.setPosition(750, 470);
		window.draw(B_G_L4);
		window.draw(rpic1);
		window.draw(rpic2);
		window.display();
	}


}
void hent( RenderWindow &window,int cell[9][9], int &c1, int &c2, int &r1, int &r2)
{
	Texture t1, t2, t3;
	RectangleShape rpic1(Vector2f(70.0f, 70.0f));
	RectangleShape rpic2(Vector2f(150.0f, 150.0f));
	RectangleShape rpic3(Vector2f(150.0f, 150.0f));
	t1.loadFromFile("blue3.png");
	t2.loadFromFile("green3.png");
	t3.loadFromFile("yellow3.png");
	bool hent = 0;
	c5 = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int first_indx = cell[i][j]; //to save the first indx for check;
			if ((j + 2) < 9 && cell[i][j] == cell[i][j + 1] && cell[i][j + 1] == cell[i][j + 3])
			{
				c1 = j + 2 + 1;
				c2 = j + 3 + 1;
				r1 = i + 1;
				r2 = i + 1;
				cout << "row is" << " " << i << "\t" << "cu is " << j + 2 << endl;
				cout << "row is" << " " << i << "\t" << "cu is " << j + 3 << endl;
				/*rpic1.setPosition(100,100);
				for (int h = 0; h < 500; ++h)
				{
					window.clear();
					if (h % 5 == 0)
						rpic1.setTexture(&t1);
					if (h % 10 == 0)
						rpic1.setTexture(&t2);
					if (h % 15 == 0)
						rpic1.setTexture(&t3);
					window.draw(rpic1);
					window.display();
				}*/

				hent = 1;
				break;
			}
			if ((i + 2) < 9 && first_indx == cell[i + 1][j] && cell[i + 1][j] == cell[i + 3][j])//for row
			{
				c1 = j + 1;
				c2 = j + 1;
				r1 = i + 2 + 1;
				r2 = i + 3 + 1;
				cout << "row is" << " " << i + 2 << "\t" << "cu is " << j << endl;
				cout << "row is" << " " << i + 3 << "\t" << "cu is " << j << endl;

				hent = 1;
				break;
			}
		}
		if (hent == 1) {
			break;
		}
	}
}

void userNmae(RectangleShape &background3, RenderWindow &window, Texture &userName)
{
	userName.loadFromFile("name.jpg");
	background3.setTexture(&userName);
	window.draw(background3);
	window.display();
}

void addCandiesSFML(int gameBoard[9][9], RenderWindow &window, RectangleShape &player1, RectangleShape &player2, RectangleShape &player3, RectangleShape &player4, RectangleShape &player5, Texture &tex1, Texture &tex2, Texture &tex3, Texture &tex4, Texture &tex5, int l)
{
	float x, y;
	if (l == 1)
	{
		x = -203.0;
		y = -87.0;
	}
	else if (l == 2)
	{
		x = -180.0;
		y = -100.0;
	}
	else if (l == 3)
	{
		x = -203.0;
		y = -87.0;
	}
	else if (l == 4)
	{
		x = -203.0;
		y = -87.0;
	}
	else if (l == 5)
	{
		x = -203.0;
		y = -87.0;
	}
	//----uploading characters----
	tex1.loadFromFile("red.png");
	tex2.loadFromFile("yellow.png");
	tex3.loadFromFile("black.png");
	tex4.loadFromFile("blue.png");
	tex5.loadFromFile("white.png");


	player1.setTexture(&tex1);
	player2.setTexture(&tex2);
	player3.setTexture(&tex3);
	player4.setTexture(&tex4);
	player5.setTexture(&tex5);

	// -------shifting the origin point of the table----------
	player1.setOrigin(x, y);
	player2.setOrigin(x, y);
	player3.setOrigin(x, y);
	player4.setOrigin(x, y);
	player5.setOrigin(x, y);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{

			if (gameBoard[i][j] == 0)
			{
				player1.setPosition(j * 60, i * 60); // setting the position of added item
				window.draw(player1);
				//window.display(); // draw and display the first character
			}

			else if (gameBoard[i][j] == 1)
			{
				player2.setPosition(j * 60, i * 60); // setting the position of added item
				window.draw(player2);
				//window.display(); // draw and dsplay the second character
			}

			else if (gameBoard[i][j] == 2)
			{
				player3.setPosition(j * 60, i * 60); // setting the position of added item
				window.draw(player3);
				//window.display(); // draw and display the third character
			}

			else if (gameBoard[i][j] == 3)
			{
				player4.setPosition(j * 60, i * 60); // setting the position of added item
				window.draw(player4);
				//window.display(); // draw and dsplay the second character
			}

			else if (gameBoard[i][j] == 4)
			{
				player5.setPosition(j * 60, i * 60); // setting the position of added item
				window.draw(player5);
				//window.display(); // draw and dsplay the second character
			}
		}
	}
	window.display();
}


void addCandies(int arr[9][9]) // add candies randomly
{
	srand(time(NULL)); // cahnge order of candies every time
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arr[i][j] = rand() % 5; // to add 3 candies
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}
void addCandiespart2(int arr[9][9], RenderWindow & window) // add candies randomly
{
	//window.setFramerateLimit(15);
	srand(time(NULL)); // cahnge order of candies every time
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == -3)
				arr[i][j] = rand() % 5; // to add 3 candies

		}
	}
}
void gravity(int arr[9][9])
{
	for (int j = 0; j < 9; j++)
	{
		for (int x = 0; x < 9; x++)
		{
			for (int i = 0; i < 9; i++)
			{
				if (i == 0)
					continue;
				if (arr[i][j] == -3 && arr[i - 1][j] != -3 && i > 0)
					swap(arr[i][j], arr[i - 1][j]);
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == -3)
				arr[i][j] = rand() % 5; // to add 3 candies

		}
	}
}
bool avMatches(int arr[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if ((arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j]) || (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2]))
			{
				return true;
			}
		}
	}
	return false;
}

void matchVertical(int arr[9][9], RenderWindow &window)
{
	//window.setFramerateLimit(60);
	int cntr = 0, temp;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && (i + 2) < 9 && arr[i][j] > -1)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i + 1][j] = arr[i + 2][j] = -3;
				for (int curr = i + 3; curr < 9; curr++)
				{
					if (arr[curr][j] == temp)
					{
						arr[curr][j] = -3;
					}
					else
						break;
				}
			}
		}
	}
}
void matchHorizontal(int arr[9][9], RenderWindow &window)
{
	//window.setFramerateLimit(60);
	for (int i = 0; i < 9; i++)
	{
		int temp;
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] && (j + 2) < 9 && arr[i][j] > -1)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i][j + 1] = arr[i][j + 2] = -3;
				for (int curr = j + 3; curr < 9; curr++)
				{
					if (arr[i][curr] == temp)
					{
						arr[i][curr] = -3;
					}
					else
						break;
				}
			}
		}
	}
}

void check(int cell[9][9])
{
	bool ch = false;
	for (int i = 0; i < 9; i++)//row
	{
		for (int j = 0; j < 9; j++)
		{
			int first_indx = cell[i][j]; //to save the first indx for check;
			if ((j + 2) < 9 && first_indx == cell[i][j + 1] && cell[i][j + 1] == cell[i][j + 2])
			{
				cell[i][j] = -3;
				cell[i][j + 1] = -3;
				cell[i][j + 2] = -3;

				for (int cu = j + 3; cu < 9; cu++) {//for complete check cu
					if (cell[i][cu] == first_indx) {
						cell[i][cu] = -3;

					}
					else {
						break;
					}
				}

				for (int cu = j; cu < j + 3; cu++) {            /* for ***
																		*
																		*
																		*   */

					for (int row = i; row < i + 3; row++) {
						if (first_indx == cell[row + 1][cu] && cell[row + 1][cu] == cell[row + 2][cu]) {
							cell[row + 1][cu] = -3;
							cell[row + 2][cu] = -3;

							for (int cu2 = row + 3; cu2 < 9; cu2++) {
								if (cell[cu2][cu] == first_indx) {
									cell[cu2][cu] = -3;

								}
								else {
									break;
								}
							}
							break;
						}
						else { break; }
					}
				}

			}
			if ((i + 2) < 9 && first_indx == cell[i + 1][j] && cell[i + 1][j] == cell[i + 2][j])//for row
			{

				cell[i][j] = -3;
				cell[i + 1][j] = -3;
				cell[i + 2][j] = -3;


				for (int cu = i + 3; cu < 9; cu++) {
					if (cell[cu][j] == first_indx) {//for four or more
						cell[cu][j] = -3;

					}
					else {
						break;
					}
				}

				for (int cu = i; cu < j + 3; cu++) {												/*  for  * * *
																											 *
																											 * * * / */
					for (int row1 = j; row1 < i + 3; row1++) {
						if (first_indx == cell[cu][row1 + 1] && cell[cu][row1 + 1] == cell[cu][row1 + 2]) {
							cell[cu][row1 + 1] = -3;
							cell[cu][row1 + 2] = -3;

							for (int cu2 = row1 + 3; cu2 < 9; cu2++) {
								if (cell[cu][cu2] == first_indx) {
									cell[cu][cu2] = -3;
								}
								else {
									break;
								}
							}
							for (int cu2 = row1; cu2 > 0; cu2--) {
								if (cell[cu][cu2] == first_indx) {
									cell[cu][cu2] = -3;
								}
								else {
									break;
								}
							}

							break;
						}
						else { break; }

					}
				}
				for (int row = i; row < i + 3; row++) {
					for (int cu = j; cu > 0; cu--) {
						if (cell[row][cu - 1] == first_indx && cell[row][cu - 1] == cell[row][cu - 2]) {
							cell[row][cu - 1] = -3;
							cell[row][cu - 2] = -3;

						}
					}
				}

				for (int x = i; x < 3; x++) {
					if (cell[x][j - 1] == first_indx && cell[x][j] == -3 && cell[x][j + 1] == first_indx) {
						cell[x][j - 1] = -3;
						cell[x][j + 1] = -3;
					}
				}

			}
		}

	}

}

void speed(RenderWindow & window)
{
	window.setFramerateLimit(15);
}

bool avMove(int arr[9][9], int temparr[9][9], int i1, int i2, int j1, int j2, RenderWindow &window)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			temparr[i][j] = arr[i][j];
		}
	}

	swap(temparr[j1][i1], temparr[j2][i2]);
	check(temparr);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (temparr[i][j] == -3)
				return true;
		}
	}
	return false;
}
void win(int l, RectangleShape & B_G_L3, RenderWindow & window)
{
	RectangleShape rpic1(Vector2f(150.0f, 150.0f));
	RectangleShape rpic2(Vector2f(150.0f, 150.0f));
	Texture level3, pic1, pic2;
	if (l == 2)
	{
		level3.loadFromFile("winl2.jpg");
		B_G_L3.setTexture(&level3);
		pic1.loadFromFile("Edward.png");
		rpic1.setTexture(&pic1);
		pic2.loadFromFile("Eva.png");
		rpic2.setTexture(&pic2);
		window.clear();
		float a = -20, b = 900, c = 900;
		while (true)
		{
			if (a <= 20)
				rpic1.setPosition(a, 440);
			if (b >= 750)
				rpic2.setPosition(b, 450);

			else break;
			a += 0.2;
			b -= 0.3;
			window.draw(B_G_L3);
			window.draw(rpic1);
			window.draw(rpic2);
			window.display();
		}

	}
	else if (l == 3)
	{
		level3.loadFromFile("win3.jpg");
		B_G_L3.setTexture(&level3);
		pic1.loadFromFile("angry-clipart-499.png");
		rpic1.setTexture(&pic1);
		pic2.loadFromFile("angry-bird-blacke-icon.png");
		rpic2.setTexture(&pic2);
		window.clear();
		float a = -20, b = 900, c = 900;
		while (true)
		{
			if (a <= 45)
				rpic1.setPosition(a, 480);
			if (b >= 730)
				rpic2.setPosition(b, 470);

			else break;
			a += 0.2;
			b -= 0.3;
			window.draw(B_G_L3);
			window.draw(rpic1);
			window.draw(rpic2);
			window.display();
		}
	}

}
void lose(int l, RectangleShape & B_G_L3, RenderWindow & window)
{
	RectangleShape rpic1(Vector2f(150.0f, 150.0f));
	RectangleShape rpic2(Vector2f(150.0f, 150.0f));
	Texture level3, pic1, pic2;
	float a = -20, b = 900, c = 900;
	if (l == 3)
	{
		level3.loadFromFile("lose3.jpg");
		B_G_L3.setTexture(&level3);
		pic1.loadFromFile("angry-clipart-499.png");
		rpic1.setTexture(&pic1);
		pic2.loadFromFile("angry-bird-blacke-icon.png");
		rpic2.setTexture(&pic2);
		window.clear();
		while (true)
		{
			if (a <= 45)
				rpic1.setPosition(a, 480);
			if (b >= 730)
				rpic2.setPosition(b, 470);

			else break;
			a += 0.2;
			b -= 0.3;
			window.draw(B_G_L3);
			window.draw(rpic1);
			window.draw(rpic2);
			window.display();
		}
	}
	if (l == 4)
	{
		level3.loadFromFile("loselv4.jpg");
		B_G_L3.setTexture(&level3);
		pic1.loadFromFile("vulture-vector-angry-6.png");
		rpic1.setTexture(&pic1);
		pic2.loadFromFile("source-clipart-movie-character-8.png");
		rpic2.setTexture(&pic2);
		window.clear();
		while (true)
		{
			if (a <= 0)
				rpic1.setPosition(a, 480);
			if (b >= 750)
				rpic2.setPosition(b, 470);

			else break;
			a += 0.2;
			b -= 0.3;
			window.draw(B_G_L3);
			window.draw(rpic1);
			window.draw(rpic2);
			window.display();
		}
	}

}
bool avMove2(int arr[9][9], int arr2[9][9], int i1, int i2, int j1, int j2)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arr2[i][j] = arr[i][j];
		}
	}

	if ((i1 == i2 + 1 && j1 == j2 + 1) || (i1 == i2 + 1 && j1 == j2 - 1) || (i1 == i2 - 1 && j1 == j2 + 1) || (i1 == i2 - 1 && j1 == j2 - 1))
		return false;

	if ((i1 == i2 + 1 && j1 == j2) || (i1 == i2 && j1 == j2 + 1) || (i1 == i2 - 1 && j1 == j2) || (i1 == i2 && j1 == j2 - 1))
	{
		return true;
	}

	return false;
}

void Aboutus(RectangleShape & back, RenderWindow &window, Texture & wee)
{
	wee.loadFromFile("WE.jpg");
	back.setTexture(&wee);
	window.draw(back);
	window.display();
}


/*void savingScoreInAFile() {
	ofstream theFile;
	ofstream theFile("Score.txt");
	//the score function goes here, the last score calculated
	if (theFile.is_open()) {
		theFile << score << endl; //saves the score in the file
		theFile.close();
	}
	else cout << "Unable to open file." << endl;
}

void UserEntersNameInAFile() {
	cout << "Enter your name." << endl;
	cin >> Player.name;
	ofstream nameFile;
	ofstream nameFile("Names.txt");
	if (nameFile.is_open()) {
		nameFile << Player.name << endl; //saves the name in the file
		nameFile.close();
	}
	else cout << "Unable to open file." << endl;
}

void ViewingHighscore() {
	string lineScore;
	string lineName;
	ifstream theFile("Score.txt");
	ifstream nameFile("Names.txt");
	if (theFile.is_open(), nameFile.is_open()) {
		while (getline(theFile, lineScore), getline(nameFile, lineName)) {
			cout << lineName << "\t\t" << lineScore;
		}
		theFile.close();
	}
	else cout << "Unable to open file." << endl;
}

*/

int main()
{
	int gameBoard[9][9], temparr[9][9], tarr[9][9], n, o = 0, tempI1, tempJ1, tempI2, tempJ2, currI, currJ, moves = 0, l = 0, score = 0, c1, c2, r1, r2; // the game board of size 9 * 9
	bool inGame = false, inMenu = true, inLevels = false, inName = false, inlevel3 = false, music = true, active = false, pressed = false, inGamePlay = true;
	player PlayerInGame;
	addCandies(gameBoard); // calling the function to add candies
	RenderWindow window(VideoMode(900, 700), "Angry Birds Crush", Style::Close | Style::Resize); // defining a window
	RectangleShape backGround(Vector2f(900.0f, 700.0f)); // create a shape to be a background
	RectangleShape player1(Vector2f(50.0f, 50.0f)); // create a shape
	RectangleShape player2(Vector2f(50.0f, 50.0f)); // create a shape
	RectangleShape player3(Vector2f(50.0f, 50.0f)); // create a shape
	RectangleShape player4(Vector2f(50.0f, 50.0f)); // create a shape
	RectangleShape player5(Vector2f(50.0f, 50.0f)); // create a shape
	RectangleShape backGround2(Vector2f(900.0f, 700.0f));
	RectangleShape backGround3(Vector2f(900.0f, 700.0f));
	RectangleShape backGroung_l3(Vector2f(900.0f, 700.0f));
	Texture level, userName, we;
	Texture tex1, tex2, tex3, tex4, tex5, bg, B_G_L3, B_G_L2; // create textures to add photos
	Font font;
	Text invMove, Tmoves, L1Moves, L2Moves, Tscore1, Tscore2, Tscore3, cl1, cl2, rw1, rw2, swaping, swaping2;
	SoundBuffer soundReffect, soundWeffect, wineffect, loseeffect;
	Sound  S_R_E, S_W_E, swe, sle;
	SoundBuffer  soundmain;
	Sound S_M;
	SoundBuffer soundlev3;
	Sound slev3;
	SoundBuffer soundlev2;
	Sound slev2;
	SoundBuffer  soundselct;
	Sound S_s;
	if (!soundselct.loadFromFile("selct.wav"));
	cout << "Can't find it " << endl;
	S_s.setBuffer(soundselct);
	//addCandiesSFML(gameBoard, window, player1, player2, player3, tex1, tex2, tex3); // calling function
	startMenu(backGround, window, bg, music); // calling function
	////////////////////////////////////////////////////////
	//#################TIME#######################################
	Clock clock;
	Texture menu1;
	menu1.loadFromFile("mains1");

	if (!font.loadFromFile("myfont.ttf"))
	{
		cout << "Error loading Font" << endl;
	}

	if (!soundmain.loadFromFile("mainmusic (2).wav"));
	cout << "Can't find it " << endl;
	S_M.setBuffer(soundmain);
	if (!soundlev3.loadFromFile("level3music.wav"));
	cout << "cant find 2 " << endl;
	slev3.setBuffer(soundlev3);
	/////////////////////////////////////////////
	if (!soundlev2.loadFromFile("level2music.wav"));
	cout << "cant find 3 " << endl;
	slev3.setBuffer(soundlev2);
	if (!soundReffect.loadFromFile("Correct-answer.wav"))
		cout << "cant afind R effict ";
	S_R_E.setBuffer(soundReffect);
	if (!soundWeffect.loadFromFile("WA.wav"))
		cout << "Error";
	S_W_E.setBuffer(soundWeffect);
	if (!wineffect.loadFromFile("preview.wav"))
		cout << "Error";
	swe.setBuffer(wineffect);
	if (!loseeffect.loadFromFile("Game Over sound effect.wav"))
		cout << "Error";
	sle.setBuffer(loseeffect);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	if (music)
		S_M.play();



	for (int i = 0; i < 20; i++)
	{
		check(gameBoard);
		gravity(gameBoard);
		//addCandiespart2(gameBoard, window);
	}


	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << gameBoard[i][j] << ' ';
		}
		cout << endl;
	}

	while (window.isOpen())
	{
		Event evnt; // declaration of an event
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
				window.close(); //order to close the window
				break;
			}

			if (evnt.type == Event::MouseButtonPressed)
				if (Mouse::isButtonPressed(Mouse::Left))
				{
					pressed = true;
					bool released = false;
					Vector2i mousepos = Mouse::getPosition(window);
					cout << (float)mousepos.x << ' ' << (float)mousepos.y << endl;
					/*if (sf::Mouse::getPosition(window).x > 40 && sf::Mouse::getPosition(window).x < 261 && sf::Mouse::getPosition().y > 199 && sf::Mouse::getPosition(window).y < 261 && inMenu == true)
					{
						backGround2.setTexture(&menu1);
						window.draw(backGround2);
						window.display();
					}*/

					if ((float)mousepos.x >= 801 && (float)mousepos.x <= 860 && (float)mousepos.y >= 35 && (float)mousepos.y <= 76 && inMenu == true)
					{
						if (music)
						{
							S_M.pause();
							music = false;

						}
						else
						{
							S_M.play();
							music = true;
						}
						startMenu(backGround, window, bg, music);

					}

					else if ((float)mousepos.x >= 28 && (float)mousepos.x <= 230 && (float)mousepos.y >= 201 && (float)mousepos.y <= 250 && inMenu == true)
					{
						if (music)
							S_s.play();
						S_M.stop();
						sle.play();
						Aboutus(backGroung_l3, window, we);
						bool About = true;
						inLevels = false;
						inMenu = false;
						inGame = false;
						inName = false;


					}

					else if ((float)mousepos.x >= 30 && (float)mousepos.x <= 229 && (float)mousepos.y >= 102 && (float)mousepos.y <= 147 && inMenu == true)
					{ // levels page
						S_M.pause();
						if (music)
						{
							S_s.play();
							S_M.play();
						}
						window.clear();
						levels(backGround2, window, level);
						inLevels = true;
						inMenu = false;
						inGame = false;
						inName = false;


					}

					else if ((float)mousepos.x >= 32 && (float)mousepos.x <= 228 && (float)mousepos.y >= 103 && (float)mousepos.y <= 146 && inLevels == true)
					{//level 1
						if (music)
							S_s.play();
						window.clear();
						l = 1;
						S_M.stop();
						level1(backGroung_l3, window, o);
						addCandiesSFML(gameBoard, window, player1, player2, player3, player4, player5, tex1, tex2, tex3, tex4, tex5, l);
						for (int i = 0; i < 9; ++i)
						{
							for (int j = 0; j < 9; ++j)
								cout << gameBoard[i][j] << " ";
							cout << endl;
						}

						for (int i = 0; i < 9; ++i)
						{
							for (int j = 0; j < 9; ++j)
								cout << gameBoard[i][j] << " ";
							cout << endl;
						}

						if (music)
						{
							slev3.play();
						}

						inLevels = false;
						inGame = true;
						inMenu = false;
						inName = false;
						inGamePlay = true;
					}

					else if ((float)mousepos.x >= 30 && (float)mousepos.x <= 230 && (float)mousepos.y >= 201 && (float)mousepos.y <= 248 && inLevels == true)
					{ // level 2
						if (music)
							S_s.play();
						window.clear();
						l = 2;
						S_M.stop();
						level2(backGroung_l3, window, o);
						addCandiesSFML(gameBoard, window, player1, player2, player3, player4, player5, tex1, tex2, tex3, tex4, tex5, l);

						for (int i = 0; i < 9; ++i)
						{
							for (int j = 0; j < 9; ++j)
								cout << gameBoard[i][j] << " ";
							cout << endl;
						}

						for (int i = 0; i < 9; ++i)
						{
							for (int j = 0; j < 9; ++j)
								cout << gameBoard[i][j] << " ";
							cout << endl; 
						}

						if (music)
						{
							slev3.play();
						}

						inLevels = false;
						inGame = true;
						inMenu = false;
						inName = false;
						inGamePlay = true;
					}
					else if ((float)mousepos.x >= 30 && (float)mousepos.x <= 228 && (float)mousepos.y >= 203 && (float)mousepos.y <= 349 && inLevels == true)
					{ // level 3
						if (music)
							S_s.play();
						window.clear();
						l = 3;
						S_M.stop();
						level3(backGroung_l3, window, o);
						addCandiesSFML(gameBoard, window, player1, player2, player3, player4, player5, tex1, tex2, tex3, tex4, tex5, l);
						if (music)
						{
							slev3.play();
						}

						inLevels = false;
						inGame = true;
						inMenu = false;
						inName = false;
						inGamePlay = true;
					}
					else if ((float)mousepos.x >= 30 && (float)mousepos.x <= 228 && (float)mousepos.y >= 403 && (float)mousepos.y <= 449 && inLevels == true)
					{ //level 4
						if (music)
							S_s.play();
						window.clear();
						l = 4;
						S_M.stop();
						level4(backGroung_l3, window, o);
						addCandiesSFML(gameBoard, window, player1, player2, player3, player4, player5, tex1, tex2, tex3, tex4, tex5, l);


						if (music)
						{
							slev3.play();
						}

						inLevels = false;
						inGame = true;
						inMenu = false;
						inName = false;
						inGamePlay = true;

					}
					else if ((float)mousepos.x >= 29 && (float)mousepos.x <= 228 && (float)mousepos.y >= 504 && (float)mousepos.y <= 542 && inLevels == true)
					{ // level 5
					if (music)
						S_s.play();
					window.clear();
					l = 5;
					S_M.stop();
					level5(backGroung_l3, window, o);
					addCandiesSFML(gameBoard, window, player1, player2, player3, player4, player5, tex1, tex2, tex3, tex4, tex5, l);

					for (int i = 0; i < 9; ++i)
					{
						for (int j = 0; j < 9; ++j)
							cout << gameBoard[i][j] << " ";
						cout << endl;
					}

					for (int i = 0; i < 9; ++i)
					{
						for (int j = 0; j < 9; ++j)
							cout << gameBoard[i][j] << " ";
						cout << endl;
					}

					if (music)
					{
						slev3.play();
					}

					inLevels = false;
					inGame = true;
					inMenu = false;
					inName = false;
					inGamePlay = true;
					}

					else if ((float)mousepos.x >= 15 && (float)mousepos.x <= 171 && (float)mousepos.y >= 19 && (float)mousepos.y <= 95 && inName == true)
					{ //back to levels
						if (music)
							S_s.play();
						window.clear();
						levels(backGround2, window, level);
						inLevels = true;
						inGame = false;
						inMenu = false;
						inName = false;

					}

					else if ((float)mousepos.x >= 15 && (float)mousepos.x <= 171 && (float)mousepos.y >= 19 && (float)mousepos.y <= 95 && inLevels == true)
					{ // back to menu
						if (music)
							S_s.play();
						window.clear();
						startMenu(backGround, window, bg, music);
						inLevels = false;
						inGame = false;
						inMenu = true;
						inName = false;
					}
					else if (inGame && (float)mousepos.x >= 200 && (float)mousepos.x <= 730 && (float)mousepos.y >= 100 && (float)mousepos.y <= 630 && moves < 200 && pressed && inGamePlay)
					{ // playing
						if (music)
							S_s.play();
						currI = ((float)mousepos.x - 200) / 60;
						currJ = ((float)mousepos.y - 100) / 60;

						if (!active)
						{ // first click 
							active = true;
							tempI1 = currI;
							tempJ1 = currJ;
							if (evnt.type == Event::MouseButtonReleased)
								pressed = true;
						}

						else if (active)
						{ // second click
							active = false;
							tempI2 = currI;
							tempJ2 = currJ;
							if (avMove(gameBoard, temparr, tempI1, tempI2, tempJ1, tempJ2, window) && avMove2(gameBoard, temparr, tempJ1, tempJ2, tempI1, tempI2))
							{
								c5 = 0;
								swap(gameBoard[tempJ1][tempI1], gameBoard[tempJ2][tempI2]);
								if (music)
									S_R_E.play();

								moves++;
								string s1 = to_string(5 - moves);
								Tmoves.setFont(font);
								Tmoves.setString(s1);
								Tmoves.setOutlineColor(Color::Red);
								Tmoves.setOutlineThickness(2);
								Tmoves.setPosition(815, 300);

								string s2 = to_string(50 - moves);
								L1Moves.setFont(font);
								L1Moves.setString(s2);
								L1Moves.setOutlineColor(Color::Red);
								L1Moves.setOutlineThickness(2);
								L1Moves.setPosition(800, 370);

								string s3 = to_string(3 - moves);
								L2Moves.setFont(font);
								L2Moves.setString(s3);
								L2Moves.setOutlineColor(Color::Red);
								L2Moves.setOutlineThickness(2);
								L2Moves.setPosition(810, 160);



								for (int i = 0; i < 200; i++)
								{
									check(gameBoard);
									cout << "Score is " << Score(gameBoard, score) << endl;
									gravity(gameBoard);
									//addCandiespart2(gameBoard, window);
								}
								string score1 = to_string(Score(gameBoard, score));
								Tscore1.setFont(font);
								Tscore1.setString(score1);
								Tscore1.setOutlineColor(Color::Red);
								Tscore1.setOutlineThickness(2);
								Tscore1.setPosition(810, 210);
								Tscore1.setCharacterSize(20);

								string score2 = to_string(Score(gameBoard, score));
								Tscore2.setFont(font);
								Tscore2.setString(score2);
								Tscore2.setOutlineColor(Color::Red);
								Tscore2.setOutlineThickness(2);
								Tscore2.setPosition(800, 170);
								Tscore2.setCharacterSize(20);

								string score3 = to_string(Score(gameBoard, score));
								Tscore3.setFont(font);
								Tscore3.setString(score3);
								Tscore3.setOutlineColor(Color::Red);
								Tscore3.setOutlineThickness(2);
								Tscore3.setPosition(790, 325);
								Tscore3.setCharacterSize(20);

								if (l == 3)
								{
									level3(backGroung_l3, window, o);
									window.draw(Tmoves);
									window.draw(Tscore2);
								}
								else if (l == 2)
								{
									level2(backGroung_l3, window, o);
									window.draw(L1Moves);
									window.draw(Tscore1);
								}
								else if (l == 4)
								{
									level4(backGroung_l3, window, o);
									window.draw(L2Moves);
									window.draw(Tscore3);
								}
								else if (l == 1)
								{
									level1(backGroung_l3, window, o);
									window.draw(L2Moves);
									window.draw(Tscore3);
								}
								else if (l == 5)
								{
									level5(backGroung_l3, window, o);
									window.draw(L2Moves);
									window.draw(Tscore3);
								}

								window.display();
								addCandiesSFML(gameBoard, window, player1, player2, player3, player4, player5, tex1, tex2, tex3, tex4, tex5, l);
							}

							else // if swap is not valid
							{
								if (c5 > 3)
								{
									c5 = 0;
								}
								c5++;
								window.draw(invMove);
								S_W_E.play();
							}

							if (evnt.type == Event::MouseButtonReleased)
								pressed = true;
						}
						system("cls");
						if (c5 == 3)
						{
							cout << "hent --->" << endl;
							hent(window,gameBoard, c1, c2, r1, r2);

							string row1 = to_string(r1);
							string row2 = to_string(r2);
							string col1 = to_string(c1);
							string col2 = to_string(c2);

							rw1.setFont(font);
							rw1.setString(row1);
							rw1.setOutlineColor(Color::Red);
							rw1.setOutlineThickness(2);
							rw1.setPosition(490, 10);
							rw1.setCharacterSize(20);

							rw2.setFont(font);
							rw2.setString(row2);
							rw2.setOutlineColor(Color::Red);
							rw2.setOutlineThickness(2);
							rw2.setPosition(475, 40);
							rw2.setCharacterSize(20);

							cl1.setFont(font);
							cl1.setString(col1);
							cl1.setOutlineColor(Color::Red);
							cl1.setOutlineThickness(2);
							cl1.setPosition(625, 10);
							cl1.setCharacterSize(20);

							cl2.setFont(font);
							cl2.setString(col2);
							cl2.setOutlineColor(Color::Red);
							cl2.setOutlineThickness(2);
							cl2.setPosition(620, 40);
							cl2.setCharacterSize(20);

							swaping.setFont(font);
							swaping.setString("Swap Row   & Col  ");
							swaping.setOutlineColor(Color::Red);
							swaping.setOutlineThickness(2);
							swaping.setPosition(300, 10);
							swaping.setCharacterSize(20);

							swaping2.setFont(font);
							swaping2.setString("With Row   & Col  ");
							swaping2.setOutlineColor(Color::Red);
							swaping2.setOutlineThickness(2);
							swaping2.setPosition(300, 40);
							swaping2.setCharacterSize(20);

							window.draw(cl1);
							window.draw(cl2);
							window.draw(rw1);
							window.draw(rw2);
							window.draw(swaping);
							window.draw(swaping2);

							window.display();
						}

						cout << " YOU Have " << moves << "\n";
						cout << " Your Score Is ---> " << score << "\n";
						if (l == 4 && moves == 3)
						{
							slev3.stop();
							cout << "## YOU LOSE ##";
							window.clear();
							if (music)
								sle.play();
							lose(l, backGroung_l3, window);
							inGamePlay = false;
						}
						if (l == 3 && moves == 5)
						{
							slev3.stop();
							cout << "## YOU LOSE ##";
							window.clear();
							if (music)
								sle.play();
							lose(l, backGroung_l3, window);
							inGamePlay = false;
						}
						if (score >= 1000)
						{
							slev3.stop();
							cout << "## YOU WIN ##";
							window.clear();
							if (music)
								swe.play();
							win(l, backGroung_l3, window);
							inGamePlay = false; 

						}
						o = 1;
					}

					if ((float)mousepos.x >= 3 && (float)mousepos.x <= 113 && (float)mousepos.y >= 274 && (float)mousepos.y <= 340 && inGame == true && l == 4)
					{ //back
						if (music)
							S_s.play();
						l = 0; 
						o = 0;
						moves = 0;
						swe.stop();
						sle.stop();
						score = 0;
						slev3.stop();
						window.clear();
						levels(backGround2, window, level);
						if (music)
							S_M.play();
						inLevels = true;
						inGame = false;
						inMenu = false;
						inName = false;
					}
					if ((float)mousepos.x >= 772 && (float)mousepos.x <= 890 && (float)mousepos.y >= 12 && (float)mousepos.y <= 67 && inGame == true && (l == 3||l==1||l==5))
					{ //back
						if (music)
							S_s.play();
						l = 0;
						o = 0;
						moves = 0;
						swe.stop();
						sle.stop();
						score = 0;
						slev3.stop();
						window.clear();
						levels(backGround2, window, level);
						if (music)
							S_M.play();
						inLevels = true;
						inGame = false;
						inMenu = false;
						inName = false;
					}
					if ((float)mousepos.x >= 755 && (float)mousepos.x <= 896 && (float)mousepos.y >= 3 && (float)mousepos.y <= 84 && inGame == true && l == 2)
					{ // back
						if (music)
							S_s.play();
						l = 0;
						o = 0;
						moves = 0;
						swe.stop();
						score = 0;
						slev3.stop();
						window.clear();
						levels(backGround2, window, level);
						if (music)
							S_M.play();
						inLevels = true;
						inGame = false;
						inMenu = false;
						inName = false;
					}

				}

		}



	}


	return 0;
}