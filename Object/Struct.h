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
	//�ʒu
	Vector2 Pos;
	//�X�s�[�h
	Vector2 Speed;
	//�����x
	Vector2 Accele;
	//���a
	float Radish;
	//HP
	int Hp;
	//�F
	int Color;
	//�U�����ꂽ���ǂ���
	int AttackedFlag;
};
#endif // !1
