#include "Scenemanager/BaseScene.h"


BaseScene::BaseScene(SceneChangeto* changer) : Image(0){ 
	//�؂�ւ��p�N���X�ɍ��̃V�[����`����
	InfSchang_ = changer;
}

void BaseScene::Initialize() {

}

void BaseScene::Finakize() {
	//���܂����񂶂񂾂Ƃ��ꂼ��ɂ����K�v������
	//Novice::Novice::UnLoadTexture("�Ȃ񂩂̉摜");
}

void BaseScene::Update(char* keys, char* preKeys) {

}

void BaseScene::Draw() {
	//���܂����񂶂񂾂Ƃ��ꂼ��ɂ����K�v������
}