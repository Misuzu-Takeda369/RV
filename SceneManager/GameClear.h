#pragma once
#ifndef GameClear_h
#define GameClear_h

class GameclearScene : public BaseScene
{
public:
	GameclearScene(SceneChangeto* changer);
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~GameclearScene() override;
	///������
	void Initialize() override;
	///�I��
	void Finakize() override;
	/// <summary>
	/// �`��
	/// </summary>
	/// <returns></returns>
	void Draw() override;
	/// <summary>
	/// �X�V
	/// </summary>
	/// <returns></returns>
	void Update(char* keys, char* preKeys) override;

};
#endif // !1
