#include <iostream>
#include <string>
using namespace std;

int main(){
    // Quiz by VILO from Bydgoszcz
    // ----!!!This is final version!!!----

    // Variables
    string container;
    int choice;
    int score = 0;
    int adding = 2;
    int allScore = 2432;

    // Arrays
    // Questions
    string db[] = {"W kanalach bylo:\nA) Brudno\nB) Czysto\nC) Ladnie pachnialo\nD) Jasno","Czy ludnosc chetnie wchodzila do kanalow:\nA) Tak\nB) Nie",
    "Harcerze w wiekszosci uzywali kanalow to przenoszenia paczek:\nA) Tak\nB) Nie","Z kim powstancy walczyli:\nA) ZSRR\nB) Wlochy\nC) III Rzesza\nD) Japonia"
    ,"Ile osob zginelo w calym powstaniu:\nA)100-150tys\nB)500-600tys\nC)52-143tys\nD)160-210tys",
    
    "Kiedy formalnie zostala zalozona poczta harcerska:;","W jakim dniu wybuchlo powstanie:;",
    "W ktorym dniu zakonczylo sie powstanie:;","W ktorym dniu powstancy zaczeli uzywac kanalow:;","Kiedy bylo najwieksze przepelnienie poczty polwej:;"

    ,"Co Niemcy lubili wrzucac do kanalow::","Na jakiej ulicy znajdowal sie oddzial pocztowy Warszawa Poludnie::","Podaj pseudonim Przemyslawa Goreckiego::"
    ,"Do jakiej formacji nalezal glowny dowodca sil tlumiacych powstanie::","Jakie panstwo wstrzymalo ofensywe ze wzgledu na powstanie::"};

    // Answears
    string answears[] = {"A","B","A","C","D","4.08.1944","1.08.1944","2.10.1944","11.08.1944","13.08.1944","GRANATY",
    "WILCZA","KUROPATWA","SS","ZSRR"};

    // Welcome
    cout << "-----------------------" << endl;
    cout << "Witamy w quizie!" << endl;
    cout << "Dzisiejszy temat to: Misja 'KanaLy' | Misja 'Poczta'" << endl;
    cout << "Twoje punkty zostaly wczytane z konta masz ich aktualnie: " << allScore << endl;
    cout << "-----------------------" << endl;


    // Asking user to start
    cout << "Czy jestes gotowy?! ([1] tak, [2] nie, chce wrocic do menu)" << endl;
    cin >> choice;
    cout << "-----------------------" << endl;

    // If statement responsible for starting quiz
    if (choice == 1)
    {
        // Asking user if he wants to see help instructions for quiz
        cout << "Czy chcesz zobaczyc pomoc do gry? ([1] tak, [2] nie)" << endl;
        cin >> choice;
        
        // If statement responsible for showing help to user
        if (choice == 1)
        {
            // Showing how to play the game
            string help =  "-Zadania zamkniete sa zakonczone na ':' odpowiadasz wybierajac opcje np. 'A'\n"
                "-Zadania otwatre sa zakonczone na '::' odpowiadasz wpisujac odpowiedz z CapsLk bez polskich znakow z podkreslnikiem zamiast spacji np. 'JOZEF_PILSUDSKI'\n"
                "-Zadania otwarte pytajace o daty sa zakonczone na ':;' odpowiadasz piszac date w formacie dzien.miesiac(cyfra).rok np 14.08.1944\n";
            cout << help;
        }

        cout << "-----------------------" << endl;
    
        // Asking questions
        for (int i = 0, k = 0; i < 3; i++)
        {
            for (int j = 0; j < 5; j++, k++)
            {
                // Asks question
                cout << "Pytanie nr. " << k+1 << ": " << endl;
                cout << db[k] << " \n";
                cin >> container;

                // Checking if answear is right
                if (container == answears[k])
                {
                    // If answear is right adds points for user
                    score += adding;
                    cout << "Dobrze!" << endl;
                }else{
                    cout << "Niestety nie" << endl << "Prawidlowa odpowiedz to: " << answears[k] << endl;
                }
                cout << "-----------------------" << endl;
            }
            // Increases points that are added first it starts with 2 next 6 and finall 5 questions 10ptk
            adding += 4;
        }
        // Adds points from quiz to general score of user
        allScore += score;

        // Shows points to user
        cout << "Twoj wynik z tego quizu : " << score << " na 90" << endl << "Twoje wszystkie punkty: " << allScore << endl;
    }else
        // Redirects user to main menu
        cout << "Zostaniesz przeniesiony do strony glownej" << endl;
    
    cout << "-----------------------" << endl;
}