#pragma once
#ifndef SceneChangeto_h
#define SceneChangeto_h
//シーンを変えるとき特化のクラス

typedef enum Scene {

	None, Title, Game, Gameclear, Gameover

};

class SceneChangeto
{
public:
	//SceneChangeto();
	virtual ~SceneChangeto();

	/// <summary>
	/// シーンを変更する関数
	/// </summary>
	/// <param name="NextScene_"></param>
	virtual void ChangeScene(Scene NextScene_) = 0;

private:

};

#endif // !1