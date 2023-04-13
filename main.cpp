#include <iostream>
#include <string>
using namespace std;

int main(){
    // Quiz by VILO from Bydgoszcz
    // Variables
    string container;
    int choice;
    int score = 0;
    int adding = 2;
    int allScore = 2432;

    // Arrays
    // Questions
    string db[] = {"O ktorej godzinie wybuchlo powstanie:\nA) W\nB) Y\nC) Z\nD) X","Czy ludnosc popierala powstanie:\nA) Tak\nB) Nie",
    "Powstanie warszwskie bylo czescia planu Burza:\nA) Tak\nB) Nie","Z kim powstancy walczyli:\nA) ZSRR\nB) Wlochy\nC) III Rzesza\nD) Japonia"
    ,"Ile osob zginelo:\nA)100-150tys\nB)500-600tys\nC)52-143tys\nD)160-210tys","Kiedy formalnie zostala zalozona poczta polowa:;","W jakim dniu wybuchlo powstanie:;",
    "W ktorym dniu zakonczylo sie powstanie:;","W ktorym dniu polacy zdobyli niemiecki czolg - Panthere:;","W ktorym dniu zakonczyla sie rzez Woli:;"
    ,"Kto byl dowodca Powstania Warszawsiego (bez pseudonimu)::","Jaki pseudonim mial Taduesz Komorowski::","Kto podpisal akt kapitulacji::"
    ,"Do jakiej formacji nalezal glowny dowodca sil tlumiacych powstanie::","Jakie panstwo wstrzymalo ofensywe ze wzgledu na powstanie::"};

    // Answears
    string answears[] = {"A","A","A","C","D","14.08.1944","1.08.1944","2.10.1944","2.08.1944","12.08.1944","ANTONI_CHRUSCIEL",
    "BOR","TADUESZ_KOMOROWSKI","SS","ZSRR"};

    // Welcome
    cout << "-----------------------" << endl;
    cout << "Witamy w quizie!" << endl;
    cout << "Dzisiejszy temat to: Powstanie Warszawskie" << endl;
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
        cout << "Twoj wynik z tego quizu : " << score << " na 90" << endl << "Twoje wszystkie punkty: " << allScore;
    }else
        // Redirects user to main menu
        cout << "Zostaniesz przeniesiony do strony glownej" << endl;
    
    cout << "-----------------------" << endl;
}