#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


namespace Physics
{
    double clamp(double val, double min, double max)
    {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}


namespace GameMath
{
    int clamp(int val, int min, int max)
    {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}



int level = 1;


// NESTED NAMESPACE


namespace Engine
{
    namespace Audio
    {
        void playSound(string name)
        {
            cout << "Playing: " << name << endl;
        }
    }
}




class Entity
{
private:
    string name;
    int health;
    int level;
    string type;

public:

   
    Entity& setName(const string& name)
    {
        this->name = name;
        return *this;
    }


    Entity& setHealth(int health)
    {
        this->health = health;
        return *this;
    }


    Entity& setLevel(int level)
    {
        this->level = level;
        return *this;
    }


    Entity& setType(const string& type)
    {
        this->type = type;
        return *this;
    }


    string getName() const
    {
        return name;
    }

    int getHealth() const
    {
        return health;
    }

    int getLevel() const
    {
        return level;
    }

    string getType() const
    {
        return type;
    }


    void displayInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
        cout << "Type: " << type << endl;
        cout << "------------------------" << endl;
    }
};



int main()
{
    
    Entity player, enemy, item;

    player.setName("Aragorn")
          .setHealth(100)
          .setLevel(10)
          .setType("Player");

    enemy.setName("Orc")
         .setHealth(60)
         .setLevel(5)
         .setType("Enemy");

    item.setName("HealthPotion")
        .setHealth(0)
        .setLevel(1)
        .setType("Item");


    cout << " ENTITY INFORMATION " << endl;

    player.displayInfo();
    enemy.displayInfo();
    item.displayInfo();


   


    double velocity = Physics::clamp(120.5, 0.0, 100.0);
    cout << "Physics clamp: " << velocity << endl;

    int health = GameMath::clamp(120, 0, 100);
    cout << "GameMath clamp: " << health << endl;

    double physicsLerp = Physics::lerp(0.0, 100.0, 0.5);
    cout << "Physics lerp: " << physicsLerp << endl;

    double gameLerp = GameMath::lerp(0.0, 100.0, 0.25);
    cout << "GameMath lerp: " << gameLerp << endl;


  
    {
        using namespace Physics;

        cout << "Limited scope clamp: "
             << clamp(150.0, 0.0, 100.0)
             << endl;
    }


    
    int R, C;

    cout << endl;
    cout << "Enter number of rows: ";
    cin >> R;

    cout << "Enter number of columns: ";
    cin >> C;



    int** gameMap = new int*[R];


    for (int i = 0; i < R; i++)
    {
        gameMap[i] = new int[C];
    }



    srand(time(0));



    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            gameMap[i][j] = rand() % 5;
        }
    }



    cout << endl;
    cout << " GAME MAP (" << R << " x " << C << ") " << endl;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << gameMap[i][j] << "  ";
        }

        cout << endl;
    }



    cout << endl;
    cout << "Legend: "
         << "0=Grass  "
         << "1=Water  "
         << "2=Mountain  "
         << "3=Forest  "
         << "4=Dungeon"
         << endl;




    int count[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            count[gameMap[i][j]]++;
        }
    }


    cout << endl;
    cout << "Tile Count:" << endl;

    cout << "Grass    : " << count[0] << endl;
    cout << "Water    : " << count[1] << endl;
    cout << "Mountain : " << count[2] << endl;
    cout << "Forest   : " << count[3] << endl;
    cout << "Dungeon  : " << count[4] << endl;



    for (int i = 0; i < R; i++)
    {
        delete[] gameMap[i];
    }

    delete[] gameMap;



    // BONUS 

    int level = player.getLevel();

    cout << endl;
    cout << "Local player level: " << level << endl;
    cout << "Global game difficulty level: " << ::level << endl;



    // OPTIONAL BONUS - Nested Namespace


    Engine::Audio::playSound("sword_clash");


    return 0;
}