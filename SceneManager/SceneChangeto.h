#pragma once
#ifndef SceneChangeto_h
#define SceneChangeto_h
//�V�[����ς���Ƃ������̃N���X

typedef enum Scene {

	None, Title, Game, Gameclear, Gameover

};

class SceneChangeto
{
public:
	//SceneChangeto();
	virtual ~SceneChangeto();

	/// <summary>
	/// �V�[����ύX����֐�
	/// </summary>
	/// <param name="NextScene_"></param>
	virtual void ChangeScene(Scene NextScene_) = 0;

private:

};

#endif // !1