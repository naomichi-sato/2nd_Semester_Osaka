
#include <iostream>
#include "CharacterBase.h"
#include "Enemy00.h"

// const参照引数を持つパラメータ表示関数
void PrintParam( const CharacterBase& character );

int main()
{
	CharacterBase* pEnemy = new Enemy00();
	PrintParam( *pEnemy );

	return 0;
}

void PrintParam( const CharacterBase& character )
{
	printf( "Character Parameter List\n" );
	printf( "------------------------\n" );
	printf( "Hp  = %3d\n", character.GetHp() );
	printf( "Mp  = %3d\n", character.GetMp() );
}
