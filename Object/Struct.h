#pragma once
#ifndef Struct_h
#define Struct_h

const int windowX = 800;
const int windowY = 608;


typedef struct Vector2 {
	float X_;
	float Y_;
};

typedef struct ObjectState {
	//位置
	Vector2 Pos;
	//スピード
	Vector2 Speed;
	//加速度
	Vector2 Accele;
	//半径
	float Radish;
	//HP
	int Hp;
	//色
	int Color;
	//攻撃されたかどうか
	int AttackedFlag;
};
#endif // !1
