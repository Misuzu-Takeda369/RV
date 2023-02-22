#pragma once
#ifndef Object_h
#define Object_h

#include "Object/Struct.h"

class Object
{
public:

	//プレイモードに呼ばれるのでのでpubicへ
	
	virtual ~Object();
	///初期化
	virtual void Initialize();
	///終了
	virtual void Finakize();
	/// <summary>
	/// 描画
	/// </summary>
	/// <returns></returns>
	virtual void Draw();
	/// <summary>
	/// 更新
	/// </summary>
	/// <returns></returns>
	virtual void Update(char* keys, char* preKeys);


private:
	//ベースステータス
	ObjectState* transform_;

};



#endif
