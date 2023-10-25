#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <unistd.h>
using namespace std;

int main()
{
	int i;
	bool END,TERRA;
	double ID,WAIT,RUB;
	ID=0;
	TERRA=0;
	END=0;
	WAIT=1e6;

	do{
		cout << "----------------------------------------" << endl;
		cout << "----------------------------------------" << endl;
		cout << "ENTRER CODE IDENTIFICATION" << endl;
		cin >> ID;
		cout << "----------------------------------------" << endl;
		cout << "----------------------------------------" << endl;
		if(ID==1023)
		{
			cout << "ID: COMMANDANT HARIS" << endl;
			cout << "PROCESSUS DE VERIFICATION SECONDAIRE" << endl;
			cout << "CODE DE SECURITE AVANT ACTIVATION ?" << endl;
			cin >> RUB;
			if(RUB==4268)
			{
				RUB=0;
				cout << "----------------------------------------" << endl;
				cout << "----------------------------------------" << endl;
				cout << "ACTIVATION DU PROCESSUS TOP SECRET ?" << endl;
				cout << "1 == OUI // 0 == NON" << endl;
				cin >> TERRA;
				if(TERRA==1)
				{
					cout << "ENTRER CODE D'ACTIVATION DU PROCESSUS DE TERRAFORMATION" << endl;
					cin >> RUB;
					if(RUB==7774)
					{
						cout << "CALCUL DES PARAMETRES EXTERNES" << endl;
						sleep(5);
						for(i=0; i<WAIT; i++)
						{
							cout << "....." << setprecision(14) << rand() << endl;
						}
						cout << "----------------------------------------" << endl;
						cout << "----------------------------------------" << endl;
						cout << "PROCESSUS DE TERRAFORMATION INITIE" << endl;
						cout << ".....TERRAFORMATION EN COURS" << endl;
						cout << ".....TEMPS D'ATTENTE ESTIME: 602 JOURS" << endl;
						cout << ".....FIN DE LA MURDER PARTY" << endl;
						END=1;
					}
					else
					{
						cout << "CODE INCORRECT" << endl;
						cout << "ABANDON DU PROCESSUS" << endl;
					}
				}
				else
				{
					cout << "ABANDON DU PROCESSUS" << endl;
				}
			}
			else
			{
				cout << "CODE INCORRECT" << endl;
				cout << "ABANDON DU PROCESSUS" << endl;
			}
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			}
		else if(ID==6052)
		{
			cout << "ID: NAVIGATEUR VEZEN" << endl;
			cout << "UTILISATION VENTAIL OBSERVATION" << endl;
			cout << "SCAN DE L'ENVIRONNEMENT PROCHE DU VAISSEAU" << endl;
			cout << "CALCUL DES PARAMETRES EXTERNES" << endl;
			sleep(5);
			for(i=0; i<WAIT; i++)
			{
				cout << "....." << setprecision(14) << rand() << endl;
			}
			cout << "----------------------------------------" << endl;
			cout << "----------------------------------------" << endl;
			cout << "RAPPORT D'OBSERVATION PRET" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
		}
		else if(ID==9085)
		{
			cout << "ID: CHEF MECANICIEN ALUDRA" << endl;
			cout << "DIAGNOSTIC DU VAISSEAU" << endl;
			cout << "SCAN DES FONCTIONS VITALES DU VAISSEAU" << endl;
			cout << "CALCUL DES PARAMETRES EXTERNES" << endl;
			sleep(5);
			for(i=0; i<WAIT; i++)
			{
				cout << "....." << setprecision(14) << rand() << endl;
			}
			cout << "----------------------------------------" << endl;
			cout << "----------------------------------------" << endl;
			cout << "DIAGNOSTIC DU VAISSEAU PRET" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
		}
		else if(ID==1109)
		{
			cout << "ID: MEDECIN DE BORD RANA" << endl;
			cout << "ANALYSE DES ECHANTILLONS DE SANG" << endl;
			cout << "SCAN DES PLAQUETTES ET GLOBULES" << endl;
			cout << "CALCUL DES PARAMETRES EXTERNES" << endl;
			sleep(5);
			for(i=0; i<WAIT; i++)
			{
				cout << "....." << setprecision(14) << rand() << endl;
			}
			cout << "----------------------------------------" << endl;
			cout << "----------------------------------------" << endl;
			cout << "BILAN DE SANTE PRET" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
		}
		else
		{
		cout << "CODE IDENTIFICATION INCORRECT" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		}
//	system("canberra-gtk-play -f Bip.ogg");
	}while(END==0);
	return 0;
}
