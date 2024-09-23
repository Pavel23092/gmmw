#include <iostream> 
using namespace std;
int main()
{
    // агент подприкрытием попал в тюрьму и ему нужно ответить на три загадки 

    cout << "Hello Agent Vlad, today we're sending you on a mission to the maximum security Black Dolphin Prison.\n";
    cout << "Your job is to get into the house without the jailers realizing you're a cop.\n";
    cout << "You need to pass three riddles from experienced prisoners.\n";
    bool forkingi, breadingi, shkonking;
    // Вилкой в глаз или в под шконку раз?

    cout << "Fork in the eye or under the window once?.\n\n";
    // Выбирай братишка
    cout << "Take your pick, brother.(1-under, 0-fork)\n\n";
    cin >> forkingi;
    if (forkingi) // если под шконку
    {
        // Ты ответил не правильно и тебе не удалось обмануть заключённых.

        cout << "You answered wrong and you failed to fool the prisoners.\n\n";
    }
    else // если вилку
    {
        // Красавчик , первый вопрос ты прошёл верно 

        cout << "Attaboy, you got the first question right. \n\n";
        // Тебя спроашивают вторую загадку.
        // Хлеб со стола или мыло с пола ?
        cout << "You're being asked a second riddle. "
            "Whether you eat the soap off the table or the bread off the garbage. \n\n";
        // Выбирай братишка? 
        cout << "Take your pick, brother.(1-soap, 0-bread, )\n\n ";
        cout << "+ 1 prison score ";
        cin >> breadingi;
        if (breadingi)// если мыло
        { // Ты ответил не правильно и тебе не удалось обмануть заключённых.

            cout << "You answered wrong and you failed to fool the prisoners.\n\n";

        }
        else // если хлеб
        {// Красавчик , первый вопрос ты прошёл верно 

            cout << "Attaboy, you got the first question right. \n\n";

            // Тебя спрашивают третью загадку
            cout << "You're being asked a third riddle  \n\n";
            // Просят сыграть на батарее, как на баяне.

            cout << "They ask you to play the battery like an accordion.  \n\n";

            cout << "Take your pick, brother.(1-play, 0-refuse)\n\n";
            cout << "+ 2 prison score ";
            cin >> shkonking;
            if (shkonking)// если играть
            {
                // Ты ответил не правильно и тебе не удалось обмануть заключённых.

                cout << "You answered wrong and you failed to fool the prisoners.\n\n";

            }
            else// если refuse
            {
                // Ты красавчик мы тебя уважаем , теперь мы тебя считаем настоящим тюремщиком.

                cout << "You're handsome, we respect you. Now we think you're a real jailer. "
                    "\n\n";
                // Ты втёрсы в доверие к заключённым
                cout << "You put your trust in the prisoners.!\n\n";
                cout << "+ 3 prison score\n ";
                //Тюремный магазин

                int a(3) ;
                    cout << "Enter the number of questions from inmates \n ";
                cin >> a;
                cout << "  ---- " << a;
                

            }   cout << " ---- Оf the gift you're getting--Chifir,Cigarettes,Sharpening----";
        }
    }
    return 0;
}