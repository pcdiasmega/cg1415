#ifndef __GAMEMANAGER__
#define __GAMEMANAGER__
#include "Camera.h"

#include "Player.h"
#include "Vector3.h"
#include <vector>
#include <map>
#include <list>
#include "LightSource.h"
#include "StaticObject.h"
#include "DynamicObject.h"
#include "GameObject.h"

class GameManager
{
	Vector3 _size_map;
	Vector3 _center_map;

	int _no_players = 2;
	std::vector<Player *> _players;

	int tempo_atual;
	int tempo_anterior;
	int tempo_inicio = 0;
	int _w = 0;
	int _h = 0;
	double _speed_car[5];
	double _speed_river[5];
	bool _status = 0;
	double _speed = 1;

	std::list<DynamicObject *> _dynamic_game_objects;
	std::list<StaticObject *> _static_game_objects;
	Frog *frog;
	Camera *camera_atual;
	int camera_atual_id = 1;
	std::vector<Camera *> _cameras;
	std::list<Frog *> list_frogs;
	LightSource *_light_sources;

	public:
		double getGameSpeed();
		Frog* getFrog();
		void setPlayer(Player *a);
		std::vector<Player *> getPlayers();
		GameManager();
		~GameManager();
		const double* getSpeedCar();
		const double* getSpeedRiver();

		void setNewFrog(Vector3 a);
		std::list<Frog*> getFrogs();

		std::list<DynamicObject *> getDynamicObjects();
		void setDynamicObject(DynamicObject * aux);

		std::list<StaticObject *> getStaticObjects();
		void setStaticObject(StaticObject* aux);
		
		std::vector<Camera *> getcameras(void);
		std::vector<Camera *> setcameras(Camera*aux);

		LightSource* getlight_sources(void);
		LightSource* setlight_sources(LightSource*);
		void changeStatus(bool a);
		bool getStatus();
		void display(void);
		void reshape(GLsizei w, GLsizei h);
		void keyPressed(unsigned char key);
		void keyUp(unsigned char key);
		void onTimer();
		void idle();
		void update(unsigned long delta);
		void init();
};

#endif
