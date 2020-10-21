
#ifndef BASE_H
#define BASE_H

// 基底クラス（親クラス）
class Base
{
public:
	Base();
	virtual ~Base();


public:
	// 引数の矩形情報と、自分が当たっているか判定
	// 関数宣言の前にvirtual をつけると、それは仮想関数になる
	virtual bool CheckHit(int x, int y, int width, int height);

	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int		m_Hp;
	float	m_PosX;
	float	m_PosY;
	float	m_MoveSpeed;

	int		m_Width;	// 当たり判定用_幅
	int		m_Height;	// 当たり判定用_高さ
};

#endif	// #ifndef BASE_H

