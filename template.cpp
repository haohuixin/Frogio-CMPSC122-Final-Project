// Includes, namespace and prototypes
#include "template.h"
#include "Player.h"
#include "Enemy.h"
#include "Level.h"
#include "Game.h"

// DEBUG GET RID OFF !!!!!!! /////
#include <iostream>
using namespace std;

//using namespace AGK;

//#define PLAYER  1
app App;
Game myGame;
//Player playerOne;
//Enemy enemyOne;
// App prototype
void AppForceExit ( void );

// Begin app, called once at the start
void app::Begin( void )
{
    myGame.CreateGame();
}

// Main loop, called every frame
void app::Loop ( void )
{
    myGame.GameLoop();
}

// Called when the app ends
void app::End ( void )
{
}