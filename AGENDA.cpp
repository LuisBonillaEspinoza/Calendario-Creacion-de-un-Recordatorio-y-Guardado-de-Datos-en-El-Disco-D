#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
	string reco,texto;
	char b[1][7][200] ={"DO","LU","MA","MI","JU","VI","SA"};
	int mes,dia,a[5][7] = {{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31}};
	int q[5][7] = {{29,30,31,1,2,3,4},{5,6,7,8,9,10,11},{12,13,14,15,16,17,18},{19,20,21,22,23,24,25},{26,27,28}};
	int z[5][7]={{26,27,28,1,2,3,4},{5,6,7,8,9,10,11},{12,13,14,15,16,17,18},{19,20,21,22,23,24,25},{26,27,28,29,30,31}};
	int x[6][7] = {{26,27,28,29,30,31,1},{2,3,4,5,6,7,8},{9,10,11,12,13,14,15},{16,17,18,19,20,21,22},{23,24,25,26,27,28,29},30};
	int h[5][7]={{30,1,2,3,4,5,6},{7,8,9,10,11,12,13},{14,15,16,17,18,19,20},{21,22,23,24,25,26,27},{28,29,30,31}};
	int g[5][7]={{28,29,30,31,1,2,3},{4,5,6,7,8,9,10},{11,12,13,14,15,16,17},{18,19,20,21,22,23,24},{25,26,27,28,29,30}};
	int t[6][7]={{25,26,27,28,29,30,1},{2,3,4,5,6,7,8},{9,10,11,12,13,14,15},{16,17,18,19,20,21,22},{23,24,25,26,27,28,29},{30,31}};
	int v[5][7]={{30,31,1,2,3,4,5},{6,7,8,9,10,11,12},{13,14,15,16,17,18,19},{20,21,22,23,24,25,26},{27,28,29,30,31}};
	int e[5][7]={{27,28,29,30,31,1,2},{3,4,5,6,7,8,9},{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,29,30}};
	int f[5][7]={{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31}};
	int l[5][7]={{29,30,31,1,2,3,4},{5,6,7,8,9,10,11},{12,13,14,15,16,17,18},{19,20,21,22,23,24,25},{26,27,28,29,30}};
	int ll[6][7]={{26,27,28,29,30,1,2},{3,4,5,6,7,8,9},{10,11,12,13,14,15,16},{17,18,19,20,21,22,23},{24,25,26,27,28,29,30},31};
	int op;
	char G[22]={"EL RECORDATORIO ES : "},resp;
	int dia1, mes1;
	char op1;
	ifstream archi;
	
	cout<<"\nAGENDA 2017"<<endl;
	cout<<"\nELIJA ENTRE UNA DE ESTAS OPCIONES: "<<endl;
	cout<<"\n1.-INGRESAR UN RECORDATORIO."<<endl;
	cout<<"\n2.-MOSTRAR CALENDARIO."<<endl;
	cout<<"\n3.-DIA FESTIVO."<<endl;
	cout<<"\n4.-DESEA VER EL RECORDATORIO ESCRITO ANTERIORMENTE."<<endl;
	do{
	cout<<"\n�QUE NUMERO DE OPCION ELIGE?: ";
	cin>>op;}while(op>=5);
	system("cls");
	switch(op){
	case 1 :
	cin.ignore();
	cout<<"\nINGRESE EL RECORDATORIO : ";
	getline(cin,reco);
	cout<<"\nGUIA DE MESES : "<<endl;
	cout<<"\n1.-ENERO."<<endl;
	cout<<"\n2.-FEBRERO."<<endl;
	cout<<"\n3.-MARZO."<<endl;
	cout<<"\n4.-ABRIL."<<endl;
	cout<<"\n5.-MAYO."<<endl;
	cout<<"\n6.-JUNIO."<<endl;
	cout<<"\n7.-JULIO."<<endl;
	cout<<"\n8.-AGOSTO."<<endl;
	cout<<"\n9.-SETIEMBRE."<<endl;
	cout<<"\n10.-OCTUBRE."<<endl;
	cout<<"\n11.-NOVIEMBRE."<<endl;
	cout<<"\n12.-DICIEMBRE."<<endl;
	do{
	cout<<"\nEN QUE MES DESEA COLOCAR SU RECORDATORIO : ";
	cin>>mes;}while(mes > 12);
	switch(mes){
		case 1: {do{
		cout<<"EN QUE DIA DEL MES DE ENERO DESEA COLOCAR SU RECORDATORIO : ";
				cin>>dia;}while(dia>31);
				switch(dia){
					case 1 : cout<<G<<reco<<endl;break;
					case 2 : cout<<G<<reco<<endl;
					cout<<"INICIO DE LA PRE 2017 III"<<endl;break;
					case 3 : cout<<G<<reco<<endl;break;
					case 4 : cout<<G<<reco<<endl;break;
					case 5 :cout<<G<<reco<<endl;break;
					case 6 :cout<<G<<reco<<endl;break;
					case 7 : cout<<G<<reco<<endl;break;
					case 8 :cout<<G<<reco<<endl;break;
					case 9 :cout<<G<<reco<<endl;break;
					case 10:cout<<G<<reco<<endl;break;
					case 11:cout<<G<<reco<<endl;break;
					case 12:cout<<G<<reco<<endl;break;
					case 13:cout<<G<<reco<<endl;break;
					case 14:cout<<G<<reco<<endl;break;
					case 15:cout<<G<<reco<<endl;break;
					case 16:cout<<G<<reco<<endl;break;
					case 17:cout<<G<<reco<<endl;break;
					case 18:cout<<G<<reco<<endl;break;
					case 19:cout<<G<<reco<<endl;break;
					case 20:cout<<G<<reco<<endl;break;
					case 21:cout<<G<<reco<<endl;break;
					case 22:cout<<G<<reco<<endl;break;
					case 23:cout<<G<<reco<<endl;break;
					case 24:cout<<G<<reco<<endl;break;
					case 25:cout<<G<<reco<<endl;break;
					case 26:cout<<G<<reco<<endl;break;
					case 27:cout<<G<<reco<<endl;break;
					case 28:cout<<G<<reco<<endl;break;
					case 29:cout<<G<<reco<<endl;break;
					case 30:cout<<G<<reco<<endl;break;
					case 31:cout<<G<<reco<<endl;break;
				}
				cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"ENERO"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(a[i][j]>=10)
					if(dia == a[i][j])
					cout<<"["<<a[i][j]<<"]"<<" ";
					else{
						cout<<a[i][j]<<"   ";
					}
					if(a[i][j]<10){
						if(dia == a[i][j])
						cout<<"["<<a[i][j]<<"]"<<"  ";
						else{
							cout<<a[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 2 : {do{
		cout<<"EN QUE DIA DEL MES DE FEBRERO DESEA COLOCAR EL RECORDARTORIO : ";
				 cin>>dia;}while(dia>28);
				 switch(dia){
				 	case 1 :cout<<G<<reco<<endl;break;
				 	case 2 :cout<<G<<reco<<endl;break;
				 	case 3 :cout<<G<<reco<<endl;break;
				 	case 4 :cout<<G<<reco<<endl;break;
				 	case 5 :cout<<G<<reco<<endl;break;
				 	case 6 :cout<<G<<reco<<endl;break;
				 	case 7 :cout<<G<<reco<<endl;break;
				 	case 8 :cout<<G<<reco<<endl;break;
				 	case 9 :cout<<G<<reco<<endl;break;
				 	case 10:cout<<G<<reco<<endl;break;
				 	case 11:cout<<G<<reco<<endl;break;
				 	case 12:cout<<G<<reco<<endl;break;
				 	case 13:cout<<G<<reco<<endl;break;
				 	case 14:cout<<G<<reco<<endl;break;
				 	case 15:cout<<G<<reco<<endl;break;	
				 	case 16:cout<<G<<reco<<endl;break;
				 	case 17:cout<<G<<reco<<endl;break;
				 	case 18:cout<<G<<reco<<endl;break;
				 	case 19:cout<<G<<reco<<endl;break;
				 	case 20:cout<<G<<reco<<endl;break;
				 	case 21:cout<<G<<reco<<endl;break;
				 	case 22:cout<<G<<reco<<endl;break;
				 	case 23:cout<<G<<reco<<endl;break;
				 	case 24:cout<<G<<reco<<endl;break;
				 	case 25:cout<<G<<reco<<endl;break;
				 	case 26:cout<<G<<reco<<endl;break;
				 	case 27:cout<<G<<reco<<endl;break;
				 	case 28:cout<<G<<reco<<endl;break;
				 }cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"FEBRERO"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(q[i][j]>=10)
					if(dia == q[i][j])
					cout<<"["<<q[i][j]<<"]"<<" ";
					else{
						cout<<q[i][j]<<"   ";
					}
					if(q[i][j]<10){
						if(dia == q[i][j])
						cout<<"["<<q[i][j]<<"]"<<"  ";
						else{
							cout<<q[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 3 :{do{
		cout<<"EN QUE DIA DEL MES DE MARZO DESEA COLOCAR EL RECORDATORIO : ";
				cin>>dia;}while(dia>31);
				switch(dia){
					case 1 :cout<<G<<reco<<endl;break;
					case 2 :cout<<G<<reco<<endl;break;
					case 3 :cout<<G<<reco<<endl;break;
					case 4 :cout<<G<<reco<<endl;break;
					case 5 :cout<<G<<reco<<endl;break;
					case 6 :cout<<G<<reco<<endl;break;
					case 7 :cout<<G<<reco<<endl;break;
					case 8 :cout<<G<<reco<<endl;break;
					case 9 :cout<<G<<reco<<endl;break;
					case 10:cout<<G<<reco<<endl;break;
					case 11:cout<<G<<reco<<endl;break;
					case 12:cout<<G<<reco<<endl;
					cout<<"EXAMEN DE SELECCION CEPRE-UNU"<<endl;break;
					case 13:cout<<G<<reco<<endl;break;
					case 14:cout<<G<<reco<<endl;break;
					case 15:cout<<G<<reco<<endl;break;
					case 16:cout<<G<<reco<<endl;break;
					case 17:cout<<G<<reco<<endl;break;
					case 18:cout<<G<<reco<<endl;break;
					case 19:cout<<G<<reco<<endl;break;
					case 20:cout<<G<<reco<<endl;break;
					case 21:cout<<G<<reco<<endl;break;
					case 22:cout<<G<<reco<<endl;break;
					case 23:cout<<G<<reco<<endl;break;
					case 24:cout<<G<<reco<<endl;break;
					case 25:cout<<G<<reco<<endl;break;
					case 26:cout<<G<<reco<<endl;
					cout<<"EXAMEN DE ADMISION ORDINARIO  2017 III"<<endl;break;
					case 27:cout<<G<<reco<<endl;break;
					case 28:cout<<G<<reco<<endl;break;
					case 29:cout<<G<<reco<<endl;break;
					case 30:cout<<G<<reco<<endl;break;
					case 31:cout<<G<<reco<<endl;break;
				}cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"MARZO"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(z[i][j]>=10)
					if(dia == z[i][j])
					cout<<"["<<z[i][j]<<"]"<<" ";
					else{
						cout<<z[i][j]<<"   ";
					}
					if(z[i][j]<10){
						if(dia == z[i][j])
						cout<<"["<<z[i][j]<<"]"<<"  ";
						else{
							cout<<z[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 4:{do{
		cout<<"EN QUE DIA DEL MES DE ABRIL DESEA COLOCAR EL RECORDATORIO : ";
				cin>>dia;}while(dia>30);
				switch(dia){
					case 1 : cout<<G<<reco<<endl;break;
					case 2 :cout<<G<<reco<<endl;break;
					case 3 :cout<<G<<reco<<endl;break;
					case 4 :cout<<G<<reco<<endl;break;
					case 5 :cout<<G<<reco<<endl;break;
					case 6 :cout<<G<<reco<<endl;break;
					case 7 :cout<<G<<reco<<endl;break;
					case 8 :cout<<G<<reco<<endl;break;
					case 9 :cout<<G<<reco<<endl;break;
					case 10:cout<<G<<reco<<endl;break;
					case 11:cout<<G<<reco<<endl;break;
					case 12:cout<<G<<reco<<endl;break;
					case 13:cout<<G<<reco<<endl;break;
					case 14:cout<<G<<reco<<endl;break;
					case 15:cout<<G<<reco<<endl;break;
					case 16:cout<<G<<reco<<endl;break;
					case 17:cout<<G<<reco<<endl;break;
					case 18:cout<<G<<reco<<endl;break;
					case 19:cout<<G<<reco<<endl;break;
					case 20:cout<<G<<reco<<endl;break;
					case 21:cout<<G<<reco<<endl;break;
					case 22:cout<<G<<reco<<endl;break;
					case 23:cout<<G<<reco<<endl;break;
					case 24:cout<<G<<reco<<endl;break;
					case 25:cout<<G<<reco<<endl;break;
					case 26:cout<<G<<reco<<endl;break;
					case 27:cout<<G<<reco<<endl;break;
					case 28:cout<<G<<reco<<endl;break;
					case 29:cout<<G<<reco<<endl;break;
					case 30:cout<<G<<reco<<endl;break;
				}cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"ABRIL"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<6;i++){
					for(int j = 0;j<7;j++){
					if(x[i][j]>=10)
					if(dia == x[i][j])
					cout<<"["<<x[i][j]<<"]"<<" ";
					else{
						cout<<x[i][j]<<"   ";
					}
					if(x[i][j]<10){
						if(dia == x[i][j])
						cout<<"["<<x[i][j]<<"]"<<"  ";
						else{
							cout<<x[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 5 : {do{
		cout<<"EN QUE DIA DEL MES DE MAYO DESEA COLOCAR EL RECORDATORIO : ";
				cin>>dia;}while(dia>31);
				switch(dia){
					case 1 : cout<<G<<reco<<endl;break;
					case 2 :cout<<G<<reco<<endl;
					cout<<"INICIO DE LA PRE 2018 I"<<endl;break;
					case 3 :cout<<G<<reco<<endl;break;
					case 4 :cout<<G<<reco<<endl;break;
					case 5:cout<<G<<reco<<endl;break;
					case 6:cout<<G<<reco<<endl;break;
					case 7:cout<<G<<reco<<endl;break;
					case 8:cout<<G<<reco<<endl;break;
					case 9:cout<<G<<reco<<endl;break;
					case 10:cout<<G<<reco<<endl;break;
					case 11:cout<<G<<reco<<endl;break;
					case 12:cout<<G<<reco<<endl;break;
					case 13:cout<<G<<reco<<endl;break;
					case 14:cout<<G<<reco<<endl;break;
					case 15:cout<<G<<reco<<endl;break;
					case 16:cout<<G<<reco<<endl;break;
					case 17:cout<<G<<reco<<endl;break;
					case 18:cout<<G<<reco<<endl;break;
					case 19:cout<<G<<reco<<endl;break;
					case 20:cout<<G<<reco<<endl;break;
					case 21:cout<<G<<reco<<endl;break;
					case 22:cout<<G<<reco<<endl;break;
					case 23:cout<<G<<reco<<endl;break;
					case 24:cout<<G<<reco<<endl;break;
					case 25:cout<<G<<reco<<endl;break;
					case 26:cout<<G<<reco<<endl;break;
					case 27:cout<<G<<reco<<endl;break;
					case 28:cout<<G<<reco<<endl;break;
					case 29:cout<<G<<reco<<endl;
					cout<<"INICIO DEL ANIVERSARIO DE LA FACULTAD DE INGENIERIA DE SISTEMAS Y DE INGENIERIA CIVIL"<<endl;
					cout<<"CONFERENCIA MAGISTRAL PARA LA ESCUELA DE INGENIERIA DE SISTEMAS"<<endl;break;
					case 30:cout<<G<<reco<<endl;
					cout<<"CONFERENCIA MAGISTAL PARA LA ESCUELA DE INGENIERIA CIVIL"<<endl;break;
					case 31:cout<<G<<reco<<endl;break;
				}
				cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"MAYO"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(h[i][j]>=10)
					if(dia == h[i][j])
					cout<<"["<<h[i][j]<<"]"<<" ";
					else{
						cout<<h[i][j]<<"   ";
					}
					if(h[i][j]<10){
						if(dia == h[i][j])
						cout<<"["<<h[i][j]<<"]"<<"  ";
						else{
							cout<<h[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 6 : {do{
				cout<<"EN QUE DIA DEL MES DE JUNIO DESEA COLOCAR EL RECORDATORIO : ";
				 cin>>dia;}while(dia>30);
				 switch(dia){
				 	case 1 : cout<<G<<reco<<endl;break;
				 	case 2 :cout<<G<<reco<<endl;break;
				 	case 3 : cout<<G<<reco<<endl;break;
				 	case 4 : cout<<G<<reco<<endl;
				 	cout<<"MISA"<<endl;
				 	cout<<"DESFILE POR ANIVERSARIO DE LA FACULTAD"<<endl;break;
				 	case 5 : cout<<G<<reco<<endl;
				 	cout<<"CAMPEONATO DEPORTIVO FIS Y DE IC"<<endl;
				 	cout<<"CALENTAMIENTO PARA EL CONCURSO DE PROGRAMACION"<<endl;break;
				 	case 6 : cout<<G<<reco<<endl;
				 	cout<<"CAMPEONATO DEPORTIVO DE LA FIS Y DE IC"<<endl;
				 	cout<<"MISS Y MISTER FIS Y IC"<<endl;break;
				 	case 7 :cout<<G<<reco<<endl;
				 	cout<<"FERIA DE CIENCIAS Y TECNOLOGIA PAR AMBAS ESCUELAS PROFESIONALES"<<endl;
				 	cout<<"GRAN GINKANA FIS Y IC"<<endl;break;
				 	case 8 : cout<<G<<reco<<endl;
				 	cout<<"SESION SOLEMNE"<<endl;break;
				 	case 9 :cout<<G<<reco<<endl;
				 	cout<<"FINAL DEL CAMPEONATO DEPORTIVO Y ALMUERZO DE CAMARADERIA"<<endl;break;
				 	case 10:cout<<G<<reco<<endl;break;
				 	case 11:cout<<G<<reco<<endl;break;
				 	case 12:cout<<G<<reco<<endl;break;
				 	case 13:cout<<G<<reco<<endl;break;
				 	case 14:cout<<G<<reco<<endl;break;
				 	case 15:cout<<G<<reco<<endl;break;
				 	case 16:cout<<G<<reco<<endl;break;
				 	case 17:cout<<G<<reco<<endl;break;
				 	case 18:cout<<G<<reco<<endl;break;
				 	case 19:cout<<G<<reco<<endl;break;
				 	case 20:cout<<G<<reco<<endl;break;
				 	case 21:cout<<G<<reco<<endl;break;
				 	case 22:cout<<G<<reco<<endl;break;
				 	case 23:cout<<G<<reco<<endl;break;
				 	case 24:cout<<G<<reco<<endl;break;
				 	case 25:cout<<G<<reco<<endl;break;
				 	case 26:cout<<G<<reco<<endl;break;
				 	case 27:cout<<G<<reco<<endl;break;
				 	case 28:cout<<G<<reco<<endl;break;
				 	case 29:cout<<G<<reco<<endl;break;
				 	case 30:cout<<G<<reco<<endl;break;}
				 cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"JUNIO"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(g[i][j]>=10)
					if(dia == g[i][j])
					cout<<"["<<g[i][j]<<"]"<<" ";
					else{
						cout<<g[i][j]<<"   ";
					}
					if(g[i][j]<10){
						if(dia == g[i][j])
						cout<<"["<<g[i][j]<<"]"<<"  ";
						else{
							cout<<g[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 7 : {do{
				cout<<"EN QUE DIA DEL MES DE JULIO DESEA COLOCAR EL RECORDATORIO : ";
				 cin>>dia;}while(dia>31);
				 switch(dia){
				 	case 1 : cout<<G<<reco<<endl;break;
				 	case 2 :cout<<G<<reco<<endl;break;
				 	case 3 :cout<<G<<reco<<endl;break;
				 	case 4 :cout<<G<<reco<<endl;break;
				 	case 5 :cout<<G<<reco<<endl;break;
				 	case 6 :cout<<G<<reco<<endl;break;
				 	case 7 :cout<<G<<reco<<endl;break;
				 	case 8 :cout<<G<<reco<<endl;break;
				 	case 9 :cout<<G<<reco<<endl;break;
				 	case 10:cout<<G<<reco<<endl;break;
				 	case 11:cout<<G<<reco<<endl;break;
				 	case 12:cout<<G<<reco<<endl;break;
				 	case 13:cout<<G<<reco<<endl;break;
				 	case 14:cout<<G<<reco<<endl;break;
				 	case 15:cout<<G<<reco<<endl;break;
				 	case 16:cout<<G<<reco<<endl;break;
				 	case 17:cout<<G<<reco<<endl;break;
				 	case 18:cout<<G<<reco<<endl;break;
				 	case 19:cout<<G<<reco<<endl;break;
				 	case 20:cout<<G<<reco<<endl;break;
				 	case 21:cout<<G<<reco<<endl;break;
				 	case 22:cout<<G<<reco<<endl;break;
				 	case 23:cout<<G<<reco<<endl;break;
				 	case 24:cout<<G<<reco<<endl;
				 	cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
				 	case 25:cout<<G<<reco<<endl;
				 	cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
				 	case 26:cout<<G<<reco<<endl;
				 	cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
				 	case 27:cout<<G<<reco<<endl;
				 	cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
				 	case 28:cout<<G<<reco<<endl;
				 	cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
				 	case 29:cout<<G<<reco<<endl;
				 	cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
				 	case 30:cout<<G<<reco<<endl;
				 	cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
				 	case 31:cout<<G<<reco<<endl;
				 	cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
				}
				cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"JULIO"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<6;i++){
					for(int j = 0;j<7;j++){
					if(t[i][j]>=10)
					if(dia == t[i][j])
					cout<<"["<<t[i][j]<<"]"<<" ";
					else{
						cout<<t[i][j]<<"   ";
					}
					if(t[i][j]<10){
						if(dia == t[i][j])
						cout<<"["<<t[i][j]<<"]"<<"  ";
						else{
							cout<<t[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 8 :{do{
		cout<<"EN QUE DIA DEL MES DE AGOSTO DESEA COLOCAR EL RECORDATORIO : ";
				cin>>dia;}while(dia>31);
				switch(dia){
					case 1 :cout<<G<<reco<<endl;
					cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
					case 2 :cout<<G<<reco<<endl;
					cout<<"SEMANA DE EXAMENES PARCIALES"<<endl;break;
					case 3 :cout<<G<<reco<<endl;break;
					case 4 :cout<<G<<reco<<endl;break;
					case 5 :cout<<G<<reco<<endl;break;
					case 6 :cout<<G<<reco<<endl;break;
					case 7 :cout<<G<<reco<<endl;break;
					case 8 :cout<<G<<reco<<endl;break;
					case 9 :cout<<G<<reco<<endl;break;
					case 10:cout<<G<<reco<<endl;break;
					case 11:cout<<G<<reco<<endl;break;
					case 12:cout<<G<<reco<<endl;break;
					case 13:cout<<G<<reco<<endl;
					cout<<"EXAMEN DE ADMISION ORDINARIO Y EXTRAORDINARIO 2018 I"<<endl;break;
					case 14:cout<<G<<reco<<endl;break;
					case 15:cout<<G<<reco<<endl;break;
					case 16:cout<<G<<reco<<endl;break;
					case 17:cout<<G<<reco<<endl;break;
					case 18:cout<<G<<reco<<endl;break;
					case 19:cout<<G<<reco<<endl;break;
					case 20:cout<<G<<reco<<endl;break;
					case 21:cout<<G<<reco<<endl;break;
					case 22:cout<<G<<reco<<endl;break;
					case 23:cout<<G<<reco<<endl;break;
					case 24:cout<<G<<reco<<endl;break;
					case 25:cout<<G<<reco<<endl;break;
					case 26:cout<<G<<reco<<endl;break;
					case 27:cout<<G<<reco<<endl;break;
					case 28:cout<<G<<reco<<endl;
					cout<<"MATRICULA ORDIANRIA"<<endl;break;
					case 29:cout<<G<<reco<<endl;
					cout<<"MATRICULA ORDINARIA"<<endl;break;
					case 30:cout<<G<<reco<<endl;
					cout<<"MATRICULA ORDINARIA"<<endl;break;
					case 31:cout<<G<<reco<<endl;
					cout<<"MATRICULA ORDINARIA"<<endl;break;
						}
				cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"AGOSTO"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(v[i][j]>=10)
					if(dia == v[i][j])
					cout<<"["<<v[i][j]<<"]"<<" ";
					else{
						cout<<v[i][j]<<"   ";
					}
					if(v[i][j]<10){
						if(dia == v[i][j])
						cout<<"["<<v[i][j]<<"]"<<"  ";
						else{
							cout<<v[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 9 :{do{
		cout<<"EN QUE DIA DEL MES DE SETIEMBRE DESEA COLOCAR EL RECORDATORIO : ";
				cin>>dia;}while(dia>30);
				switch(dia){
					case 1: cout<<G<<reco<<endl;
					cout<<"MATRICULA ORDINARIA"<<endl;break;
					case 2:cout<<G<<reco<<endl;
					cout<<"MATRICULA ORDINARIA"<<endl;break;
					case 3:cout<<G<<reco<<endl;break;
					case 4:cout<<G<<reco<<endl;
					cout<<"INICIO DE CLASES Y DE LA PRE 2018 II"<<endl;break;
					case 5:cout<<G<<reco<<endl;break;
					case 6:cout<<G<<reco<<endl;break;
					case 7:cout<<G<<reco<<endl;break;
					case 8:cout<<G<<reco<<endl;break;
					case 9:cout<<G<<reco<<endl;break;
					case 10:cout<<G<<reco<<endl;break;
					case 11:cout<<G<<reco<<endl;break;
					case 12:cout<<G<<reco<<endl;break;
					case 13:cout<<G<<reco<<endl;break;
					case 14:cout<<G<<reco<<endl;break;
					case 15:cout<<G<<reco<<endl;break;
					case 16:cout<<G<<reco<<endl;break;
					case 17:cout<<G<<reco<<endl;break;
					case 18:cout<<G<<reco<<endl;break;
					case 19:cout<<G<<reco<<endl;break;
					case 20:cout<<G<<reco<<endl;break;
					case 21:cout<<G<<reco<<endl;break;
					case 22:cout<<G<<reco<<endl;break;
					case 23:cout<<G<<reco<<endl;break;
					case 24:cout<<G<<reco<<endl;break;
					case 25:cout<<G<<reco<<endl;break;
					case 26:cout<<G<<reco<<endl;break;
					case 27:cout<<G<<reco<<endl;break;
					case 28:cout<<G<<reco<<endl;break;
					case 29:cout<<G<<reco<<endl;break;
					case 30:cout<<G<<reco<<endl;break;
					}
				cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					cout<<"SETIEMBRE"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(e[i][j]>=10)
					if(dia == e[i][j])
					cout<<"["<<e[i][j]<<"]"<<" ";
					else{
						cout<<e[i][j]<<"   ";
					}
					if(e[i][j]<10){
						if(dia == e[i][j])
						cout<<"["<<e[i][j]<<"]"<<"  ";
						else{
							cout<<e[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 10:{do{
		cout<<"EN QUE DIAL DEL MES DE OCTUBRE DESEA COLOCAR EL RECORDATORIO : ";
				cin>>dia;}while(dia>31);
				switch(dia){
					case 1: cout<<G<<reco<<endl;break;
					case 2:cout<<G<<reco<<endl;break;
					case 3:cout<<G<<reco<<endl;break;
					case 4:cout<<G<<reco<<endl;break;
					case 5:cout<<G<<reco<<endl;break;
					case 6:cout<<G<<reco<<endl;break;
					case 7:cout<<G<<reco<<endl;break;
					case 8:cout<<G<<reco<<endl;break;
					case 9:cout<<G<<reco<<endl;break;
					case 10:cout<<G<<reco<<endl;break;
					case 11:cout<<G<<reco<<endl;break;
					case 12:cout<<G<<reco<<endl;break;
					case 13:cout<<G<<reco<<endl;break;
					case 14:cout<<G<<reco<<endl;break;
					case 15:cout<<G<<reco<<endl;break;
					case 16:cout<<G<<reco<<endl;break;
					case 17:cout<<G<<reco<<endl;break;
					case 18:cout<<G<<reco<<endl;break;
					case 19:cout<<G<<reco<<endl;break;
					case 20:cout<<G<<reco<<endl;break;
					case 21:cout<<G<<reco<<endl;break;
					case 22:cout<<G<<reco<<endl;break;
					case 23:cout<<G<<reco<<endl;
					cout<<"EXAMENES PARCIALES"<<endl;break;
					case 24:cout<<G<<reco<<endl;
					cout<<"EXAMENES PARCIALES"<<endl;break;
					case 25:cout<<G<<reco<<endl;
					cout<<"EXAMENES PARCIALES"<<endl;break;
					case 26:cout<<G<<reco<<endl;
					cout<<"EXAMENES PARCIALES"<<endl;break;
					case 27:cout<<G<<reco<<endl;
					cout<<"EXAMENES PARCIALES"<<endl;break;
					case 28:cout<<G<<reco<<endl;
					cout<<"EXAMENES PARCIALES"<<endl;break;
					case 29:cout<<G<<reco<<endl;break;
					case 30:cout<<G<<reco<<endl;break;
					case 31:cout<<G<<reco<<endl;break;
				}
				cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;;
					cout<<"OCTUBRE"<<endl;;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(f[i][j]>=10)
					if(dia == f[i][j])
					cout<<"["<<f[i][j]<<"]"<<" ";
					else{
						cout<<f[i][j]<<"   ";
					}
					if(f[i][j]<10){
						if(dia == f[i][j])
						cout<<"["<<f[i][j]<<"]"<<"  ";
						else{
							cout<<f[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 11 : {do{
		cout<<"EN QUE DIA DEL MES DE NOVIEMBRE DESEA COLOCAR EL RECORDATORIO : ";
				  cin>>dia;}while(dia>30);
				  switch(dia){
				  	case 1: cout<<G<<reco<<endl;break;
				  	case 2:cout<<G<<reco<<endl;break;
				  	case 3:cout<<G<<reco<<endl;break;
				  	case 4:cout<<G<<reco<<endl;break;
				  	case 5:cout<<G<<reco<<endl;break;
				  	case 6:cout<<G<<reco<<endl;break;
				  	case 7:cout<<G<<reco<<endl;break;
				  	case 8:cout<<G<<reco<<endl;break;
				  	case 9:cout<<G<<reco<<endl;break;
				  	case 10:cout<<G<<reco<<endl;break;
				  	case 11:cout<<G<<reco<<endl;break;
				  	case 12:cout<<G<<reco<<endl;break;
				  	case 13:cout<<G<<reco<<endl;break;
				  	case 14:cout<<G<<reco<<endl;break;
				  	case 15:cout<<G<<reco<<endl;break;
				  	case 16:cout<<G<<reco<<endl;break;
				  	case 17:cout<<G<<reco<<endl;break;
				  	case 18:cout<<G<<reco<<endl;break;
				  	case 19:cout<<G<<reco<<endl;break;
				  	case 20:cout<<G<<reco<<endl;break;
				  	case 21:cout<<G<<reco<<endl;break;
				  	case 22:cout<<G<<reco<<endl;break;
				  	case 23:cout<<G<<reco<<endl;break;
				  	case 24:cout<<G<<reco<<endl;break;
				  	case 25:cout<<G<<reco<<endl;break;
				  	case 26:cout<<G<<reco<<endl;break;
				  	case 27:cout<<G<<reco<<endl;break;
				  	case 28:cout<<G<<reco<<endl;break;
				  	case 29:cout<<G<<reco<<endl;break;
				  	case 30:cout<<G<<reco<<endl;break;
				  }
				cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;;
					cout<<"NOVIEMBRE"<<endl;;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(l[i][j]>=10)
					if(dia == l[i][j])
					cout<<"["<<l[i][j]<<"]"<<" ";
					else{
						cout<<l[i][j]<<"   ";
					}
					if(l[i][j]<10){
						if(dia == l[i][j])
						cout<<"["<<l[i][j]<<"]"<<"  ";
						else{
							cout<<l[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					}};break;
		case 12 :{ do{
		cout<<"EN QUE DIA DEL MES DE DICIEMBRE DESEA COLOCAR EL RECORDATORIO : ";
				  cin>>dia;}while(dia>31);
				  switch(dia){
				  	case 1: cout<<G<<reco<<endl;break;
				  	case 2:cout<<G<<reco<<endl;break;
				  	case 3:cout<<G<<reco<<endl;break;
				  	case 4:cout<<G<<reco<<endl;break;
				  	case 5:cout<<G<<reco<<endl;break;
				  	case 6:cout<<G<<reco<<endl;break;
				  	case 7:cout<<G<<reco<<endl;break;
				  	case 8:cout<<G<<reco<<endl;break;
				  	case 9:cout<<G<<reco<<endl;break;
				  	case 10:cout<<G<<reco<<endl;break;
				  	case 11:cout<<G<<reco<<endl;break;
				  	case 12:cout<<G<<reco<<endl;break;
				  	case 13:cout<<G<<reco<<endl;break;
				  	case 14:cout<<G<<reco<<endl;break;
				  	case 15:cout<<G<<reco<<endl;break;
				  	case 16:cout<<G<<reco<<endl;break;
				  	case 17:cout<<G<<reco<<endl;
				  	cout<<"EXAMEN DE ADMISION 2018 II"<<endl;break;
				  	case 18:cout<<G<<reco<<endl;break;
				  	case 19:cout<<G<<reco<<endl;break;
				  	case 20:cout<<G<<reco<<endl;break;
				  	case 21:cout<<G<<reco<<endl;break;
				  	case 22:cout<<G<<reco<<endl;break;
				  	case 23:cout<<G<<reco<<endl;break;
				  	case 24:cout<<G<<reco<<endl;break;
				  	case 25:cout<<G<<reco<<endl;break;
				  	case 26:cout<<G<<reco<<endl;break;
				  	case 27:cout<<G<<reco<<endl;break;
				  	case 28:cout<<G<<reco<<endl;break;
				  	case 29:cout<<G<<reco<<endl;break;
				  	case 30:cout<<G<<reco<<endl;break;
				  	case 31:cout<<G<<reco<<endl;break;
				  }
				cout<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;;
					cout<<"DICIEMBRE"<<endl;;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<6;i++){
					for(int j = 0;j<7;j++){
					if(ll[i][j]>=10)
					if(dia == ll[i][j])
					cout<<"["<<ll[i][j]<<"]"<<" ";
					else{
						cout<<ll[i][j]<<"   ";
					}
					if(ll[i][j]<10){
						if(dia == ll[i][j])
						cout<<"["<<ll[i][j]<<"]"<<"  ";
						else{
							cout<<ll[i][j]<<"    ";
						}
					}
					}
					cout<<"\n";
					};break;
				}};break;
	case 2 : {
	cout<<"CALENDARIO DEL A�O 2017"<<endl;
	cout<<"\nENERO"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(a[i][j]>=10)
					cout<<a[i][j]<<"   ";
					if(a[i][j]<10){
					cout<<a[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nFEBRERO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(q[i][j]>=10)
					cout<<q[i][j]<<"   ";
					if(q[i][j]<10){
					cout<<q[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nMARZO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(z[i][j]>=10)
					cout<<z[i][j]<<"   ";
					if(z[i][j]<10){
					cout<<z[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nABRIL"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(x[i][j]>=10) 
					cout<<x[i][j]<<"   ";
					if(x[i][j]<10){
					cout<<x[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nMAYO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(h[i][j]>=10)
					cout<<h[i][j]<<"   ";
					if(h[i][j]<10){
					cout<<h[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nJUNIO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(g[i][j]>=10)
					cout<<g[i][j]<<"   ";
					if(g[i][j]<10){
					cout<<g[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nJULIO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(t[i][j]>=10)
					cout<<t[i][j]<<"   ";
					if(t[i][j]<10){
					cout<<t[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nAGOSTO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(v[i][j]>=10)
					cout<<v[i][j]<<"   ";
					if(v[i][j]<10){
					cout<<v[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nSETIEMBRE"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(e[i][j]>=10)
					cout<<e[i][j]<<"   ";
					if(e[i][j]<10){
					cout<<e[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nOCTUBRE"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(f[i][j]>=10)
					cout<<f[i][j]<<"   ";
					if(f[i][j]<10){
					cout<<f[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nNOVIEMBRE"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(l[i][j]>=10)
					cout<<l[i][j]<<"   ";
					if(l[i][j]<10){
					cout<<l[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}	
	cout<<"\nDICIEMBRE"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					cout<<b[d][c]<<"   ";
					}
					cout<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(ll[i][j]>=10)
					cout<<ll[i][j]<<"   ";
					if(ll[i][j]<10){
					cout<<ll[i][j]<<"    ";
					}
					}
					cout<<"\n";
					}};break;
	case 3 : {
		do{

	do{
		cout<<"INGRESE EL DIA : ";
		cin>>dia1;
	}while(dia1>31);
		do{
			cout<<"INGRESE EL MES : ";
			cin>>mes1;
		}while(mes1>12);
		switch(mes1){
			case 1 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"ENERO"<<endl;break;
			case 2 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"FEBRERO"<<endl;break;
			case 3 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"MARZO"<<endl;break;
			case 4 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"ABRIL"<<endl;break;
			case 5 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"MAYO"<<endl;break;
			case 6 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"JUNIO"<<endl;break;
			case 7 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"JULIO"<<endl;break;
			case 8 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"AGOSTO"<<endl;break;
			case 9 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"SETIEMBRE"<<endl;break;
			case 10 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"OCTUBRE"<<endl;break;
			case 11 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"NOVIEMBRE"<<endl;break;
			case 12 : cout<<"LA FECHA ES : "<<dia1<<" / "<<"DICIEMBRE"<<endl;break;
		}
		cout<<"LA FECHA ES LA CORRECTA  : ";
		cin>>resp;
	}while(resp == 'N');
	switch(mes1){
		case 1 : switch(dia1){
			case 1 : cout<<"01/01/1986: El Inti se convierte en moneda oficial en el Per�."<<endl;break;
			case 2 : cout<<"02/01/1553: Comienza a funcionar la Universidad de San Marcos en el Convento de Santo Domingo."<<endl;break;
			case 3 : cout<<"03/01/1991: El Gobierno Peruano crea una nueva moneda: el Nuevo Sol."<<endl;break;
			case 4 : cout<<"4/01/1643: Nace Isaac Newton, f�sico, fil�sofo, te�logo, inventor, alquimista y matem�tico ingl�s."<<endl;break;
			case 5 : cout<<"05/01/1864: Se establece a Iquitos como la capital de Loreto."<<endl;break;
			case 6 : cout<<"6/01/1953: Se inaugura oficialmente la Cl�nica San Juan de Dios."<<endl;break;
			case 7 : cout<<"7/01/1610 : En Italia, Galileo Galilei observa cuatro de las lunas de J�piter a trav�s de su telescopio."<<endl;break;
			case 8 : cout<<"8/01/2002: Patch Adams llega hasta el barrio de Bel�n, en Iquitos, para realizar trabajos de ayuda social con su reconocida metodolog�a �Comic relief�."<<endl;break;
			case 9 : cout<<"9/01/1986: El joven Herbert Scavino es liberado por sus captores con una oreja cercenada, tras 75 d�as de cautiverio, en uno de los casos de secuestro m�s sonados en el Per�."<<endl;break;
			case 10 : cout<<"10/01/1969: Lanzamiento de la sonda espacial sovi�tica Venera 6 a Venus, llegando a transmitir durante 51 minutos desde su atm�sfera."<<endl;break;
			case 11: cout<<"11/01/1986: En el Per� entra en vigencia el decreto legislativo que elimina el uso del papel sellado."<<endl;break;
			case 12 : cout<<"12/01/1866:  Chile y Per� ratifican un tratado de alianza ofensiva y defensiva para repeler las agresiones de la armada espa�ola, que pretend�a bloquear los puertos chilenos."<<endl;break;
			case 13 : cout<<"13/01/1881: Batalla de San Juan entre tropas invasoras chilenas y fuerzas peruanas que custodiaban la capital."<<endl;break;
			case 14 : cout<<"14/01/1866: En Per�, el gobierno formula una declaraci�n de guerra, al considerarse agraviado por el de Espa�a."<<endl;break;
			case 15 : cout<<"15/01/1929: Nace Martin Luther King, pastor y activista por los derechos civiles de afroamericanos estadounidenses."<<endl;break;
			case 16 : cout<<"16/01/1605: Se publica la primera edici�n de Don Quijote de la Mancha, escrita por Miguel de Cervantes Saavedra, obra cumbre de la literatura espa�ola."<<endl;break;
			case 17 : cout<<"17/01/1958: Surge la televisi�n peruana cuando el ministro de Educaci�n, Jorge Basadre, inaugura el Canal 7."<<endl;break;
			case 18 : cout<<"18/01/1911: Nace Jos� Mar�a Arguedas, escritor, antrop�logo y etn�logo peruano autor de �Los r�os profundos�."<<endl;break;
			case 19 : cout<<"19/01/1880: El Congreso de los Diputados de Espa�a vota la abolici�n de la esclavitud en Cuba."<<endl;break;
			case 20: cout<<"20/01/2011:  Muere en Lima, Luis Jaime Cisneros Vizquerra, ling�ista y docente universitario de la Universidad Nacional Mayor de San Marcos y de la Pontificia Universidad Cat�lica del Per�."<<endl;break;
			case 21 : cout<<"21/01/1893: Se patenta la receta secreta de la Coca-Cola. A partir de ese momento la bebida comenz� a ser comercializada a nivel mundial."<<endl;break;
			case 22 : cout<<"22/01/1826: En El Callao (Per�) se rinde la Fortaleza del Real Felipe, �ltimo reducto de la resistencia espa�ola en Sudam�rica."<<endl;break;
			case 23 : cout<<"23/01/1941: Se publica la Ley N� 9300 que crea la provincia de Nasca, en Ica."<<endl;break;
			case 24 : cout<<"24/1/1817: Fallece el abogado lime�o Jos� Baqu�jano y Carrillo."<<endl;break;
			case 25 : cout<<"25/01/1947: Se crea el primer videojuego en Estados Unidos."<<endl;break;
			case 26 : cout<<"26/01/1962: En Estados Unidos, la nave Ranger 3 despega para caer en la Luna. Pero la sonda espacial le erra a su blanco por 35 400 km."<<endl;break;
			case 27 : cout<<"27/01/1967: Tres astronautas mueren al incendiarse la cabina de una nave durante el ensayo para la misi�n Apolo I."<<endl;break;
			case 28 : cout<<"28/01/1985: En EE. UU. el grupo de artistas Usa for Africa graban la canci�n We Are The World, con fines ben�ficos."<<endl;break;
			case 29 : cout<<"29/01/1985: Fallece el poeta peruano Mart�n Ad�n (Rafael de la Fuente Benavides)."<<endl;break;
			case 30 : cout<<"30/01/1948: Es asesinado el l�der de la India Mahatma Gandhi."<<endl;break;
			case 31 : cout<<"31/01/1822: en Per�, el Congreso le concede a la aldea de Trujillo el t�tulo de �ciudad benem�rita y fidel�sima a la Patria�."<<endl;break;
		};break;
	case 2 : switch(dia1){
			 case 1 : cout<<"01/02/1985: El papa Juan Pablo II visita el Per� por primera vez."<<endl;break;
			 case 2 : cout<<"02/02/1981: Per� y Ecuador firman un alto el fuego."<<endl;break;
			 case 3 : cout<<"03/02/1895: Nace el pol�tico V�ctor Ra�l Haya de la Torre, uno de los pensadores m�s influyentes del siglo XX en el Per�, fundador del Partido Aprista Peruano."<<endl;break;
			 case 4 : cout<<"04/02/1846: Se aprueba por primera vez, el Presupuesto General de la Rep�blica, durante el gobierno del Mariscal, Ram�n Castilla."<<endl;break;
			 case 5 : cout<<"05/02/1985: Papa Juan Pablo II, se despide del Per� desde Iquitos, tras visita de cinco d�as. Estuvo reunido con los pobladores de Villa el Salvador."<<endl;
			 case 6 : cout<<"06/02/1873: Bolivia y Per� firman un tratado secreto de alianza militar. Chile argumentar� ese tratado para declararle la guerra al Per� en 1879."<<endl;break;
			 case 7 : cout<<"07/02/1833: Nace don Ricardo Palma, escritor, c�lebre tradicionalista, reconstructor de la Biblioteca Nacional saqueada por fuerzas chilenas, conocido como el <<bibliotecario mendigo>>, autor de: Tradiciones Peruanas."<<endl;break;
			 case 8 : cout<<"08/02/1942: Nace en Lima, el m�dico Marcial Ayaipoma Alvarado, Presidente del Congreso de la Rep�blica (2005-2006)."<<endl;break;
			 case 9 : cout<<"09/02/1991: El Gobierno peruano impone el estado de emergencia a causa de una epidemia de c�lera."<<endl;break;
			 case 10 : cout<<"10/02/1823: El general, Sim�n Bol�var, es nombrado libertador del Per�."<<endl;break;
			 case 11 : cout<<"11/02/1997: Se re�nen el Gobierno peruano y los miembros del Movimiento Revolucionario T�pac Amaru (MRTA) que han tomado rehenes en la residencia del Embajador japon�s."<<endl;break;
			 case 12 : cout<<"12/02/1542: Francisco de Orellana descubre el r�o Amazonas. La expedici�n hab�a sido organizada por Gonzalo Pizarro en Cusco y Orellana se hab�a juntado a ella en Quito. Sin embargo, en un punto del camino ellos se separan, Pizarro regresa a Quito y Orellana sigue adelante, siendo el primer europeo en navegar todo el R�o Amazonas."<<endl;break;
			 case 13 : cout<<"13/02/1578: Llega al Callao una escuadra pirata de cinco nav�os comandada por el almirante Francis Drake, primer corsario que asol� las costas del Per�."<<endl;break;
			 case 14 : cout<<"14/02/1536: Las tropas de Hernando Pizarro que estaban sitiadas en el Cusco, hacen una salida y derrotan a los indios produci�ndose una masacre."<<endl;break;
			 case 15 : cout<<"15/02/1824: El Congreso peruano otorg� el t�tulo de Mariscal de Ayacucho al patriota independentista venezolano, general Antonio Jos� de Sucre."<<endl;break;
			 case 16 : cout<<"16/02/1933: Muere el Poeta, Domingo Mart�nez Luj�n."<<endl;break;
			 case 17 : cout<<"17/02/1824: El Congreso de la Rep�blica nombra a Sim�n Bol�var dictador del Per� y suspende la Constituci�n."<<endl;break;
			 case 18 : cout<<"18/02/1974:  Muere en Lima, el General Manuel A. Odr�a Amoretti, presidente del Per� (1948-1956)."<<endl;break;
			 case 19 : cout<<"19/02/1939: Nace en Lima, el escritor Alfredo Bryce Echenique, autor de <<Un mundo para Julius>> y <<La vida exagerada de Mart�n Roma�a>>."<<endl;break;
			 case 20 : cout<<"20/02/1564:  Por motivos pasionales es asesinado el virrey del Per�, Diego de Acevedo y Z��iga. Una ma�ana se le encontr� muerto en su lecho y se supo que hab�a perecido a manos de unos negros por orden de un esposo ofendido."<<endl;break;
			 case 21 : cout<<"21/02/1536:  Hern�n Pizarro se apodera de la ciudad del Cusco."<<endl;break;
			 case 22 : cout<<"22/02/1995: Conflicto del Cenepa: Tropas peruanas toman el control de <<Falso Tiwinza>>, un duplicado puesto ecuatoriano, situado en territorio peruano, en el Alto Cenepa, Amazonas."<<endl;break;	
			 case 23 : cout<<"23/02/1935: Se funda el Instituto Sanmartiniano del Per�, el segundo m�s antiguo del mundo."<<endl;break;
			 case 24 : cout<<"24/02/1927:  Nace Violeta Correa de Bela�nde, periodista y primera dama del Per� (1980-1985) se destac� por su incansable trabajo por los m�s pobres. Se cas� con el presidente Fernando Bela�nde Terry en 1971."<<endl;break;
			 case 25 : cout<<"25/02/1778: Nace en Yapey�, Argentina, don Jos� de San Mart�n, Libertador de Argentina, Chile y Per�. Gobern� el Per� con el cargo de <<Protector>> (1821-1822)."<<endl;break;
			 case 26 : cout<<"26/02/1954: Nace en Lima, el ingeniero Rafael Rey Rey, fundador del partido Renovaci�n Nacional, Congresista de la Rep�blica, Embajador del Per� y Ministro de Estado."<<endl;break;
			 case 27 : cout<<"27/02/1868: Miguel Grau Seminario es nombrado comandante del monitor Hu�scar."<<endl;break;
			 case 28 : cout<<"28/02/1865: Estalla en Arequipa la revoluci�n que encabeza el prefecto coronel Mariano Ignacio Prado."<<endl;break;
	};break;
	case 3 : switch(dia1){
			 case 1 : cout<<"01/03/1914: Nace en Huaraz, Sarita Colonia Zambrano, santa popular, se hizo famosa por hacer milagros, muri� con fama de santidad y tiene gran veneraci�n en el Per�."<<endl;break;
			 case 2 : cout<<"02/03/1951: Nace en Lima, Roberto Da�ino Zapata, Primer Ministro del Per� (2001-2002), Vicepresidente Senior del Banco Mundial."<<endl;break;
			 case 3 : cout<<"03/03/1828: Colombia pide al Per� que en el plazo de seis meses le entregue Ja�n y Maynas, que pague su deuda de Independencia, que reduzca el n�mero de tropas en su frontera y que vuelva a aceptar al embajador colombiano que hab�a sido expulsado del Per�, entre otras exigencias m�s."<<endl;break;
			 case 4 : cout<<"04/03/1987: El gobierno del presidente Alan Garc�a, admite incapacidad de combate frente a los terroristas de <<Sendero Luminoso>>."<<endl;break;
			 case 5 : cout<<"05/03/1535: Francisco Pizarro oficializa la fundaci�n de la Ciudad de Trujillo de Nueva Castilla, en honor a su ciudad natal, Trujillo de Extremadura."<<endl;break;
			 case 6 : cout<<"06/03/1928: En el pueblo de Aracataca, nace Gabriel Garcia M�rquez, escritor colombiano, Premio Nobel de Literatura en 1982, autor de <<Cien A�os de Soledad>> y <<Amor en los Tiempos del Colera>>."<<endl;break;
			 case 7 : cout<<"07/03/2000: Los cancilleres de Chile, Juan Gabriel Vald�s, y del Per�, Fernando de Trazegnies, suscriben el Acta de entrega y recepci�n que pone fin a los asuntos pendientes del Tratado de 1929. Inauguran un Cristo de la Concordia en la cima del Morro de Arica."<<endl;break;
			 case 8 : cout<<"08/03/1915: Nace la historiadora peruana Mar�a Rostworoski de Diez Canseco, autora del libro <<Historia del Tahuantinsuyo>>."<<endl;break;
			 case 9 : cout<<"09/03/1825: El Congreso dispone que el departamento de Trujillo se denomine <<La Libertad>>."<<endl;break;
			 case 10 : cout<<"10/03/1543: Se expide la C�dula que traslada la Real Audiencia creada en Panam� en 1538 a Lima, marcando el origen de los Tribunales Superiores de Justicia."<<endl;break;
			 case 11 : cout<<"11/03/1914: Muere Don Ram�n Espinoza, insigne educador y patriota."<<endl;break;
			 case 12 : cout<<"12/03/1560: Se coloca la primera piedra de la catedral de Cusco."<<endl;break;
			 case 13 : cout<<"13/03/1873: Muere el Coronel Don Manuel Trinidad Odr�a."<<endl;break;
			 case 14 : cout<<"14/03/1879: Nace en Ulm (Alemania), el sabio y f�sico Albert Einstein, creador de la Teor�a de la Relatividad."<<endl;break;
			 case 15 : cout<<"15/03/1822: Se modifica la bandera peruana ideada por el Libertador San Mart�n, ahora ser�a con una franja blanca transversal entre dos encarnadas de la misma altura. El nuevo dise�o no prosper� porque se confud�a con la bandera espa�ola."<<endl;break;
			 case 16 : cout<<"16/03/1956: Se crea la Provincia de Talara, en el Departamento de Piura."<<endl;break;
			 case 17 : cout<<"17/03/1923: El pensador marxista Jos� Carlos Mari�tegui regresa al Per� luego de tres a�os de exilio por sus cr�ticas al gobierno de Augusto Legu�a."<<endl;break;
			 case 18 : cout<<"18/03/1818: Llega al Callao el �ltimo cargamento oficial de esclavizados procedentes del �frica a bordo de la fragata Rita, que parti� de Santander (Espa�a)."<<endl;break;
			 case 19 : cout<<"19/03/1738: Nace en Cusco, Jos� Gabriel Condorcanqui, conocido como T�pac Amaru II, lider� la m�s importante rebeli�n durante la Am�rica espa�ola."<<endl;break;
			 case 20 : cout<<"20/03/2002: Un coche-bomba estalla en el distrito de Surco, en Lima, dejando 9 muertos y una treintena de heridos. La explosi�n se produjo cerca de la embajada de Estados Unidos, dos d�as antes de la llegada del presidente de ese pa�s, George W. Bush."<<endl;break;
			 case 21 : cout<<"21/03/2001: Ante el Congreso, la Fiscal de la Naci�n, Nelly Calder�n, denuncia al ex presidente Alberto Fujimori como uno de los autores de la masacre de Barrios Altos, donde murieron 16 personas en 1991."<<endl;break;
			 case 22 : cout<<"22/03/1910: Per� y Chile rompen sus relaciones diplom�ticas por las disputas sobre las provincias peruanas de Tacna y Arica."<<endl;break;
			 case 23 : cout<<"23/03/1928: El pensador comunista Jos� Carlos Mari�tegui abandona el APRA y funda el Partido Comunista Peruano."<<endl;break;
			 case 24 : cout<<"24/03/1825: Se establece por decreto la bandera y el escudo del Per� y se anula el pabell�n ideado en tiempos del general Jos� de San Mart�n."<<endl;break;
			 case 25 : cout<<"25/03/2008: La Corte Suprema del Per� eval�a el pedido del ex presidente Alberto Fujimori para reducir la pena de 6 a�os de c�rcel por ordenar el allanamiento ilegal de la casa de su ex asesor, Vladimiro Montesinos."<<endl;break;
			 case 26 : cout<<"26/03/1612: El Padre Luis de Valdivia es nombrado Visitador General de las provincias de Chile por el Virrey del Per�, para la implantaci�n de la guerra defensiva."<<endl;break;
			 case 27 : cout<<"27/03/1883: Un incendio se produce en la Catedral de Lima, donde fallece el bombero de la compa��a Victoria N� 8, Francisco J. Fergunsson."<<endl;break;
			 case 28 : cout<<"28/03/1946: Nace en Cabana (Ancash), el economista Alejandro Toledo Manrique, presidente del Per� (2001-2006)."<<endl;break;
			 case 29 : cout<<"29/03/1813: Chile le declara la guerra al Virreinato del Per�. Es la primera, de tres veces que Chile le declara la guerra al Per�, las otras fueron en 1836 y 1879."<<endl;break;
			 case 30 : cout<<"30/03/1822: Mar�a Parado de Bellido, mujer ayacuchana que se entreg� a la causa de la Independencia, es fusilada en la plaza de Ayacucho."<<endl;break;
			 case 31 : cout<<"31/03/1813: Chile dispone el embargo de todos los buques del Virreinato del Per�, en el marco de la lucha por la Independencia."<<endl;break;
	}break;
	case 4 : switch(dia1){
			 case 1 : cout<<"01/04/1528: En un d�a no determinado del mes de Abril llega el primer esclavo negro al Per�, el cual desembarc� junto a Alonso de Molina en Tumbes."<<endl;break;
			 case 2 : cout<<"02/04/1822: Se crea el Museo Nacional de Arqueolog�a, Antropolog�a e Historia de Lima, como un espacio que albergue el testimonio de nuestros antepasados."<<endl;break;
			 case 3 : cout<<"03/04/1822: La Municipalidad de Lima otorga al General Jos� de San Mart�n el estandarte de Francisco Pizarro en agradecimiento por la acci�n libertadora del militar argentino."<<endl;break;
			 case 4 : cout<<"04/04/1994: Per� formaliza su regreso al Pacto Andino, tras casi dos a�os de ausencia."<<endl;break;
			 case 5 : cout<<"05/04/1992: El presidente Alberto Fujimori cierra el Congreso e interviene el Poder Judicial, en lo que se conocer�a como el <<autogolpe>>."<<endl;break;
			 case 6 : cout<<"06/04/1879: El Per� responde a la declaratoria de guerra chilena, declar�ndole tambi�n la guerra a Chile."<<endl;break;
			 case 7 : cout<<"07/04/1879: Guerra del Pac�fico: debido al inicio de hostilidades, se corta toda comunicaci�n oficial entre la Rep�blica de Chile y la del Per� y Bolivia."<<endl;break;
			 case 8 : cout<<"08/04/1928: Se juega el primer <<cl�sico>> del f�tbol peruano entre los equipos de Alianza Lima y Universitario de Deportes."<<endl;break;
			 case 9 : cout<<"09/04/1995: Alberto Fujimori es reelegido presidente del Per�, con mayor�a absoluta."<<endl;break;
			 case 10 : cout<<"10/04/1948: Muere en Lima el grumete afroperuano Alberto Medina Cecilia, H�roe naval y sobreviviente de la dotaci�n del Monitor Hu�scar."<<endl;break;
			 case 11 : cout<<"11/04/1880: Nace en Huarochir� (Lima) el sabio Julio C. Tello, arqu�ologo y antrop�logo, descubridor de la cultura Paracas y estudioso de la cultura Chav�n, es considerado el <<Padre de la Arqueolog�a Peruana>>."<<endl;break;
			 case 12 : cout<<"12/04/1539: Nace en el Cusco, el Inca Garcilaso de la Vega, escritor e historiador peruano, autor de <<Los Comentarios Reales de los Incas>>."<<endl;break;
			 case 13 : cout<<"13/04/1578: Se realiza el segundo Auto de Fe en la Plaza Mayor. Fueron condenados dieciseis reos, fue quemado vivo el dominico fray Francisco de la Cruz, los dem�s recibieron azotes, destierros, prisi�n y multas."<<endl;break;
			 case 14 : cout<<"14/04/1985: Alan Garc�a gana las elecciones presidenciales del Per� y se convierte en el mandatario m�s joven en la historia de la Naci�n. Su gobierno dej� al Per� al borde de la bancarrota econ�mica y el caos pol�tico y social."<<endl;break;
			 case 15 : cout<<"15/04/1822: Se oficializa el Himno Nacional del Per�, con letra de Jos� de la Torre Ugarte y m�sica de Jos� Bernardo Alcedo."<<endl;break;
			 case 16 : cout<<"16/04/1930: Muere en Lima, el pensador marxista, Jos� Carlos Mari�tegui, periodista, literato, pol�tico y ensayista, fundador del Partido Socialista Peruano (luego llamado Partido Comunista del Per�)), autor de <<7 ensayos de Interpretaci�n de la Realidad Peruana>>."<<endl;break;
			 case 17 : cout<<"17/04/1879: El gobierno del general Mariano Ignacio Prado crea la �Junta Central de Ambulancias Civiles de la Cruz Roja�, que ser�a llamada Cruz Roja Peruana."<<endl;break;
			 case 18 : cout<<"18/04/1828: Se produce un mot�n de militares pro-peruanos en Chuquisaca (Bolivia). Sucre es gravemente herido. Tropas peruanas invaden Bolivia."<<endl;break;
			 case 19 : cout<<"19/04/1942: Muere en Lima, el poeta, Jos� Mar�a Eguren, el primer poeta simbolista y posmodernista de la literatura peruana."<<endl;break;
			 case 20 : cout<<"20/04/1586: Nace Isabel Flores de Oliva, m�s conocida como Santa Rosa de Lima, religiosa dominica, la primera santa de Am�rica, patrona de Lima, Per�, el Nuevo Mundo y las Filipinas (otros dicen que naci� el 30 de Abril)."<<endl;break;
			 case 21 : cout<<"21/04/1889: Nace en Lima, Manuel Prado Ugarteche, dos veces presidente de la Rep�blica (1939-1945 y 1956-1962), hijo del ex presidente Mariano Ignacio Prado, hermano de los pol�ticos Pedro Prado y Javier Prado y del h�roe nacional, Leoncio Prado."<<endl;break;
			 case 22 : cout<<"22/04/1857: El Congreso dispone que la provincia del Callao se denomine <<Provincia Constitucional>>."<<endl;break;
			 case 23 : cout<<"23/04/1616: Muere pobre, triste y desolado, Miguel de Cervantes Saavedra, autor de <<El Quijote de la Mancha>>."<<endl;break;
			 case 24 : cout<<"24/04/1880: Muere en el Callao el Teniente Coronel Pedro Ruiz Gallo, por descuido de un ayudante, cuando preparaba un torpedo."<<endl;break;
			 case 25 : cout<<"25/04/1534: Francisco Pizarro realiza la segunda fundaci�n de Jauja, despu�s de la fundaci�n espa�ola del Cusco."<<endl;break;
			 case 26 : cout<<"26/04/1986: Se produce el mayor accidente nuclear de la historia, al explotar un reactor nuclear en Chernobil, al norte de Ucrania (URSS), y arrojar a la atm�sfera una radiaci�n equivalente a 500 bombas at�micas como la de Hiroshima."<<endl;break;
			 case 27 : cout<<"27/04/1835: Charles Darwin inicia un viaje por tierra a lo largo de la costa de Per�."<<endl;break;
			 case 28 : cout<<"28/04/1895: Nace en el Calla el compositor V�ctor Correa M�rquez."<<endl;break;
			 case 29 : cout<<"29/04/2006: Gobierno resuelve retirar de inmediato a Carlos Urrutia, embajador en Caracas, por insistentes intromisiones del presidente venezolano Hugo Ch�vez en asuntos internos de pa�s."<<endl;break;
			 case 30 : cout<<"30/04/1933: Muere asesinado en Lima, Luis Miguel S�nchez Cerro, presidente del Per� (1930-), a manos de un fan�tico aprista."<<endl;break;
	};break;
	case 5 : switch(dia1){
			 case 1 : cout<<"01/05/1866: Tr�gica huelga en la ciudad de Chicago (Estados Unidos) gracias a la cual se conquistaron las 8 horas de trabajo diario."<<endl;break;
			 case 2 : cout<<"02/05/1866: Combate del Dos de Mayo en el Callao, que puso fin a la dominaci�n espa�ola en Am�rica. "<<endl;break;
			 case 3 : cout<<"03/05/1844: Nace en Tacna, Modesto Molina eminente poeta y periodista, en Tacna. Encargado de crear escuelas privadas peruanas durante la <<chilenizaci�n>> de Tacna, Arica y Tarapac�. Autor del Himno de Tacna."<<endl;break;
			 case 4 : cout<<"04/05/1839: Aparece el primer n�mero del diario <<El Comercio>>, bajo el lema de <<Orden, Libertad y Saber>>, fundado por don Manuel Amun�tegui y don Alejandro Villota. Es el decano de la prensa peruana."<<endl;break;
			 case 5 : cout<<"05/05/1887: Don Ricardo Palma funda la Academia Peruana de la Lengua. Su primer presidente fue Francisco Garc�a Calder�n, ex presidente del Per�."<<endl;break;
			 case 6 : cout<<"06/05/1536: Se inicia la rebeli�n de Manco Inca que, a la vez que cercaba al Cusco, envi� contra Lima un ej�rcito de 60,000 nativos al mando de Quizo Yupanqui y de los capitanes Illa T�pac y Puyu Vilca."<<endl;break;
			 case 7 : cout<<"07/05/1988: El Papa Juan Pablo II inicia viaje a Am�rica Latina, visitando Uruguay, Bolivia, Per� y Paraguay."<<endl;break;
			 case 8 : cout<<"08/05/2002: El Municipio de Ilo ofrece a Bolivia un puerto de uso exclusivo en el Oc�ano Pacifico, como alternativa para las exportaciones de gas boliviano a USA y M�xico."<<endl;break;
			 case 9 : cout<<"09/05/1551: Se establece la Universidad de Lima, en Per�."<<endl;break;
			 case 10 : cout<<"10/05/1866: Las fuerzas espa�olas se retiran definitivamente del Per� luego de ser derrotados en la batalla del 2 de mayo y de haber enterrado sus muertos en la isla San Lorenzo."<<endl;break;
			 case 11 : cout<<"11/05/1870: Luego de 15 meses de viaje, llegan al Callao los monitores Manco C�pac y Atahualpa, adquiridos al gobierno de Estados Unidos."<<endl;break;
			 case 12 : cout<<"12/05/1827: El comandante colombiano, Jos� Bustamante es acusado de haber querido incorporar Guayaquil al Per� con sus tropas."<<endl;break;
			 case 13 : cout<<"13/05/1647: A las 10 de la noche se produce un fuerte terremoto en Ica."<<endl;break;
			 case 14 : cout<<"14/05/1939: La ni�a peruana, Lina Medina, se vuelve la madre m�s joven de la historia m�dica a la edad de 5 a�os, 7 meses y 21 d�as, hab�a comenzado a menstruar a los dos a�os y ocho meses. Nunca se supo qui�n fue el padre."<<endl;break;
			 case 15 : cout<<"15/05/1963: A los 21 a�os de edad, muere en la selvas de Madre de Dios, Javier Heraud P�rez, poeta y guerrillero peruano."<<endl;break;
			 case 16 : cout<<"16/05/2008: Se inaugura en Lima la V Cumbre de Am�rica Latina, el Caribe y la Uni�n Europea (ALC-UE Per� ) en la que participan cerca de 60 Presidentes y Jefes de Estado, y cuyos temas son la cohesi�n social y el cambio clim�tico."<<endl;break;
			 case 17 : cout<<"17/05/1936: Se funda el Centro Musical Felipe Pinglo en Lima."<<endl;break;
			 case 18 : cout<<"18/05/1980: Fernando Bela�nde Terry gana las elecciones presidenciales de Per�."<<endl;break;
			 case 19 : cout<<"19/05/1837: La Confederaci�n Argentina declara la guerra a la Confederaci�n Per�-Boliviana, debido a problemas lim�trofes en Tarija y por el apoyo de Andr�s de Santa Cruz al Partido Unitario Argentino."<<endl;break;
			 case 20 : cout<<"20/05/1945: Nace en Arequipa, Vladimiro Montesinos Torres, abogado y militar. Jefe de facto del Servicio de Inteligencia Nacional (SIN), desde el cual realiz� numerosos actos de corrupci�n."<<endl;break;
			 case 21 : cout<<"21/05/1997: El astronauta peruano-estadounidense, Carlos Noriega, ofrece teleconferencia sobre la <<Nasa y el Trasbordador Atlantis>>. Fue el primer sudamericano en viajar al espacio."<<endl;break;
			 case 22 : cout<<"22/05/1884: El tradicionalista Ricardo Palma recibe el encargo de reconstruir la Biblioteca Nacional tras la guerra con Chile."<<endl;break;
			 case 23 : cout<<"23/05/1986: El escritor Mario Vargas Llosa recibe el Premio Pr�ncipe de Asturias de las Letras."<<endl;break;
			 case 24 : cout<<"24/05/1940: Terremoto destruye gran parte del Callao. 179 muertos, m�s de 3 mil heridos y cientos de edificaciones destruidas."<<endl;break;
			 case 25 : cout<<"25/05/1907: Muere en Tarma el Monse�or Manuel Tovar."<<endl;break;
			 case 26 : cout<<"26/05/1802: En Madrid, a los 18 a�os, se casa el Libertador Sim�n Bolivar con la joven Mar�a Teresa Rodr�guez del Toro y Alayza, quien fallece ocho meses m�s tarde, en Caracas."<<endl;break;
			 case 27 : cout<<"27/05/2007: En tr�gico accidente de tr�nsito, muere Sara Barreto <<Mu�equita Sally>>, cantante de m�sica folkl�rica."<<endl;break;
			 case 28 : cout<<"28/05/1839: Nace en la Provincia de Pomabamba el Teniente Coronel Don Manuel Melgarejo S�enz."<<endl;break;
			 case 29 : cout<<"29/05/2008: El Per� firma Tratados de Libre Comercio (TLCs) con Canad� y Singapur."<<endl;break;
			 case 30 : cout<<"30/05/1783: Nace en Lima, Jos� de la Riva-Ag�ero y S�nchez Boquete, primer Presidente del Per� (1823) busc� conciliar con el Virrey y fue desterrado a Chile."<<endl;break;
			 case 31 : cout<<"31/05/1822: Se establece el cambio de la bandera nacional, ahora ser�a de tres listas verticales, la del centro blanca y la de los extremos encarnados, y es as� desde entonces."<<endl;break;
	};break;
	case 6  :switch(dia1){
			 case 1 : cout<<"01/06/1985: El abogado y soci�logo, Alan Garc�a P�rez es elegido presidente a la edad de 36 a�os."<<endl;break;
			 case 2 : cout<<"02/06/1945: Muere en Lima, el Mariscal, Oscar Benavides Larrea, dos veces presidente del Per� (1914-1915 y 1933-1939)."<<endl;break;
			 case 3 : cout<<"03/06/1966: Se inaugura en I�ambari, el puente m�s largo del Per�, con 155 metros."<<endl;break;
			 case 4 : cout<<"04/06/2006: Alan Garc�a P�rez es electo por segunda vez como Presidente Constitucional de la Rep�blica del Per�, derrotando al nacionalista Ollanta Humala."<<endl;break;
			 case 5 : cout<<"05/06/1961: Nace en Lima, Fernando Iwasaki Cauti, escritor peruano, ganador del Premio Cop� de Narrativa (1998)."<<endl;break;
			 case 6 : cout<<"06/06/1963: El arquitecto Fernando Bela�nde Terry es elegido presidente constitucional de Per�."<<endl;break;
			 case 7 : cout<<"07/06/1964: Se registra uno de los inviernos m�s fr�os de Lima, la temperatura desciende a 9.4 grados Celsius."<<endl;break;
			 case 8 : cout<<"08/06/1962: Se crean los Colegios de Arquitectos y de Ingenieros en el Per�."<<endl;break;
			 case 9 : cout<<"09/06/1551: Se establece la Universidad de Lima, en Per�."<<endl;break;
			 case 10 : cout<<"10/06/1990: El desconocido ingeniero de origen japon�s, Alberto Fujimori Fujimori, derrota al famoso escritor Mario Vargas Llosa en la segunda vuelta de las elecciones presidenciales."<<endl;break;
			 case 11 : cout<<"11/06/1984: Denominan al dominio mar�timo peruano: <<Mar de Grau>>."<<endl;break;
			 case 12 : cout<<"12/06/1929: Nace Anna Frank ni�a judia autora del Diario de Anna Frank, muri� en un campo de concentraci�n."<<endl;break;
			 case 13 : cout<<"13/06/1823: Tropas espa�olas ocupan Lima. Extraen plata labrada de la Catedral y de las Iglesias de la capital, saquean la Biblioteca Nacional, incendian la Casa de Moneda."<<endl;break;
			 case 14 : cout<<"14/06/1850: El Gobierno de Ram�n Castilla promulga la Primera Ley de Instrucci�n P�blica para reglamentar la educaci�n en escuelas y colegios de la rep�blica."<<endl;break;
			 case 15 : cout<<"15/06/1882: El Congreso dispone que la villa de Lambayeque reciba el t�tulo de <<ciudad>> con el renombre de <<Generosa y Benem�rita>>."<<endl;break;
			 case 16 : cout<<"16/06/1909: Nace en Piura, el General Juan Velasco Alvarado, Presidente de la Rep�blica (1968-1975) durante la <<Primera fase>> del Gobierno Revolucionario de las Fuerzas Armadas, de corte socialista."<<endl;break;
			 case 17 : cout<<"17/06/1578: Se produce un fuerte terremoto en Lima."<<endl;break;
			 case 18 : cout<<"18/06/1986: En las c�rceles de Lima se produce un mot�n, dirigido por los presos acusados de terrorismo."<<endl;break;
			 case 20 : cout<<"20/06/1962: El ingeniero peruano Jorge Grieve es designado entre los <<9 sabios>>por la OEA."<<endl;break;
			 case 21 : cout<<"21/06/1825: El Libertador Jos� de San Mart�n crea el distrito de San Jer�nimo, en la provincia de Andahuaylas."<<endl;break;
			 case 22 : cout<<"22/06/1983: Se registra el primer caso de Sida en Per�."<<endl;break;
			 case 23 : cout<<"23/06/1823: El presidente Jos� de la Riva-Ag�ero es depuesto por el Congreso. Poco tiempo despu�s volvi� al cargo y m�s tarde fu� apresado."<<endl;break;
			 case 24 : cout<<"24/06/1969: Disponen que es gratuita la ense�anza primaria, secundaria y magisterial en el Per�."<<endl;break;
			 case 25 : cout<<"25/06/1825:  El Libertador Sim�n Bolivar llega al Cusco, donde recibe una corona de oro, adem�s de diamantes, perlas y otras joyas, tambi�n recibe las llaves de la ciudad."<<endl;break;
			 case 26 : cout<<"26/06/1945: Se crea la ONU al firmarse la <<Carta de las Naciones Unidas>> por representantes de 50 pa�ses, en San Francisco, Estados Unidos."<<endl;break;
			 case 27 : cout<<"27/06/1829: Se celebra un Armisticio en el Per�."<<endl;break;
			 case 28 : cout<<"28/06/2009: La ciudad sagrada de Caral es declarada por la UNESCO como Patrimonio Cultural de la Humanidad."<<endl;break;
			 case 29 : cout<<"29/06/1823: Fusilan a Jos� Olaya Balandra, pescador patriota chorrillano, apresado por el ej�rcito realista sufri� 200 palazos y le arrancaron las u�as pero no delat� a sus compa�eros."<<endl;break;
			 case 30 : cout<<"30/06/1857: Manuel Ignacio de Vivanco recibe del pueblo Yumina (Arequipa) el t�tulo de Mariscal de Yumina."<<endl;break;
	};break;
	case 7 : switch(dia1){
			 case 1 : cout<<"01/07/1959: Se crea la C�mara Peruana de la Construcci�n."<<endl;break;
			 case 2 : cout<<"02/07/1936: Se promulga el C�digo Civil."<<endl;break;
			 case 3 : cout<<"03/07/2008: Por primera vez llega al Per�, el espect�culo de lucha libre de la WWE."<<endl;break;
			 case 4 : cout<<"04/07/1919: El presidente peruano Jos� Pardo y Barrera es derrocado y sustituido provisionalmente por Augusto B. Legu�a."<<endl;break;
			 case 5 : cout<<"05/07/1869: Se firma Contrato Dreyffus en Par�s."<<endl;break;
			 case 6 : cout<<"06/07/1822: El general don Jos� de San Mart�n cre� la primera escuela normal del Per�."<<endl;break;
			 case 7 : cout<<"07/07/2007: Machu Picchu es declarada una de las Nuevas Maravillas del Mundo en una ceremonia realizada en Lisboa (Portugal)."<<endl;break;
			 case 8 : cout<<"08/07/1538: Diego de Almagro es ejecutado al garrote en Cusco, su cad�ver es decapitado y su cabeza expuesta en la plaza p�blica. Sus restos fueron sepultados en la Iglesia de La Merced del Cusco."<<endl;break;
			 case 9 : cout<<"09/07/1919: Augusto B. Legu�a, que se hab�a erigido Jefe de Estado, es nombrado Presidente Provisorio por una Asamblea Constituyente, que �l habia convocado."<<endl;break;
			 case 10 : cout<<"10/07/1967: Se funda Federaci�n de Artesanos del Per�."<<endl;break;
			 case 11 : cout<<"11/07/1830: Nace Jos� Sebasti�n Barranca, naturista, presidente fundador de la la Academia Nacional de Ciencias del Per�."<<endl;break;
			 case 12 : cout<<"12/07/1821: El Libertador Don Jos� de San Mart�n, hace su entrada en Lima"<<endl;break;
			 case 13 : cout<<"13/07/1821: El General don Jos� de San Mart�n decreta la abolici�n de la Constituci�n espa�ola, disponiendo que entrara en vigencia el Reglamento Provisional de Huaura."<<endl;break;
			 case 14 : cout<<"14/07/1928: Nace Ernesto <<Che>> Guevara, revolucionario argentino."<<endl;break;
			 case 15 : cout<<"15/07/1828: El Gobierno de Colombia env�a al Per� un manifiesto en el que expone los motivos por los cuales le har� la guerra al Per�."<<endl;break;
			 case 16 : cout<<"16/07/1823: Las tropas espa�olas abandonan Lima, luego de extraer la plata labrada de la Catedral y de las iglesias de la capital, saquean la Biblioteca Nacional, incendian la Casa de la Moneda."<<endl;break;
			 case 17 : cout<<"17/07/1978: Victoria de V�ctor Ra�l Haya de la Torre en las elecciones peruanas para la Asamblea Constituyente."<<endl;break;
			 case 18 : cout<<"18/07/1962: Golpe militar derroca al presidente Manuel Prado, acusado de parcialidad ante el proceso electoral."<<endl;break;
			 case 19 : cout<<"19/07/1911: Per� y Colombia firman en Bogot�, el <<Convenio de Statu Quo>> y liberaci�n de prisioneros."<<endl;break;
			 case 20 : cout<<"20/07/2002: Un pavoroso incendio en la exclusiva discoteca <<Utop�a>> del Jockey Plaza de Lima deja un saldo de 29 muertos y 45 heridos."<<endl;break;
			 case 21 : cout<<"21/07/1821: Se instala en Lima, el primer Consejo de Gobierno presidido por Jos� de San Mart�n."<<endl;break;
			 case 22 : cout<<"22/07/1983: Per� decide poner fin a caza de la ballena."<<endl;break;
			 case 23 : cout<<"23/07/1948: El peruano Daniel Cargio cruza a nado el estrecho de Gibraltar en 9 horas y 20 minutos y se convierte en el primer nadador que realiza esta proeza."<<endl;break;
			 case 24 : cout<<"24/07/1977: El escritor Mario Vargas Llosa ingresa a la Academia Peruana de la Lengua."<<endl;break;
			 case 25 : cout<<"25/07/1963: Creaci�n del Colegio M�dico del Per�."<<endl;break;
			 case 26 : cout<<"26/07/1904: Se inaugura el tranv�a el�ctrico Lima-Callao."<<endl;break;
			 case 27 : cout<<"27/07/2002: Una expedici�n de exploradores, liderada por Jacek Palkiewicz, afirma haber descubierto <<El Dorado>>, la m�tica ciudad inca de Paititi, en una zona colindante con el parque nacional del Manu, entre los departamentos peruanos de Cuzco y Madre de Dios."<<endl;break;
			 case 28 : cout<<"28/07/1884: Se reabre Biblioteca Nacional bajo direcci�n de don Ricardo Palma."<<endl;break;
			 case 29 : cout<<"29/07/1905: Se funda el Instituto Hist�rico del Per�."<<endl;break;
			 case 30 : cout<<"30/07/1889: Nace Juan Bielovucic, uno de los precursores de la aviaci�n, en el Per�."<<endl;break;
			 case 31 : cout<<"31/07/1941: Fuerzas peruanas toman Puerto Bol�var en Ecuador, durante la Guerra Peruano-Ecuatoriana. Es el primer combate en el hemisferio en el que intervinieron tropas aerotransportadas."<<endl;break;
	};break;
	case 8 : switch(dia1){
			 case 1 : cout<<"01/08/1816: Don Jos� de San Mart�n es nombrado Comandandante General del Ej�rcito de los Andes."<<endl;break;
			 case 2 : cout<<"02/08/1979: Muere en Lima, V�ctor Ra�l Haya de la Torre, Presidente de la Asamblea Constituyente de 1978, fundador de la Alianza Popular Revolucionaria Americana (APRA)."<<endl;break;
			 case 3 : cout<<"03/08/1968: Guerrilleros peruanos intentan ingresar al pa�s por Madre de Dios, desde Bolivia."<<endl;break;
			 case 4 : cout<<"04/08/1540: Se funda la ciudad de Yungay (Ancash) y el Convento de Santo Domingo de Yungay."<<endl;break;
			 
	};break;
};break;}
case 4 : archi.open("D://AGENGA.txt",ios::in);
while(!archi.eof()){
	getline(archi,texto);
	cout<<texto<<endl;
}
}
ofstream archivo;
archivo.open("D://AGENGA.txt",ios::out);
switch(op){
	case 1 : 

archivo<<"AGENDA 2017"<<endl;
archivo<<"\nINGRESE EL RECORDATORIO : "<<reco<<endl;
archivo<<"\nGUIA DE MESES: "<<endl;
archivo<<"\n1.-ENERO."<<endl;
archivo<<"\n2.-FEBRERO."<<endl;
archivo<<"\n3.-MARZO."<<endl;
archivo<<"\n4.-ABRIL."<<endl;
archivo<<"\n5.-MAYO."<<endl;
archivo<<"\n6.-JUNIO."<<endl;
archivo<<"\n7.-JULIO."<<endl;
archivo<<"\n8.-AGOSTO."<<endl;
archivo<<"\n9.-SETIEMBRE."<<endl;
archivo<<"\n10.-OCTUBRE."<<endl;
archivo<<"\n11.-NOVIEMBRE."<<endl;
archivo<<"\n12.-DICIEMBRE."<<endl;
archivo<<"\nEN QUE MES DESEA COLOCAR SU RECORDATORIO : "<<mes<<endl;
switch(mes){
	case 1: {archivo<<"EN QUE DIA DEL MES DE ENERO DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	if(dia == 2){
		archivo<<"INICIO DE LA PRE 2017 III"<<endl;
	}
archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"ENERO"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(a[i][j]>=10)
					if(dia == a[i][j])
					archivo<<"["<<a[i][j]<<"]"<<" ";
					else{
						archivo<<a[i][j]<<"   ";
					}
					if(a[i][j]<10){
						if(dia == a[i][j])
						archivo<<"["<<a[i][j]<<"]"<<"  ";
						else{
							archivo<<a[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 2 : {archivo<<"EN QUE DIA DEL MES DE FEBRERO DESEA COLOCAR EL RECORDARTORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"FEBRERO"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(q[i][j]>=10)
					if(dia == q[i][j])
					archivo<<"["<<q[i][j]<<"]"<<" ";
					else{
						archivo<<q[i][j]<<"   ";
					}
					if(q[i][j]<10){
						if(dia == q[i][j])
						archivo<<"["<<q[i][j]<<"]"<<"  ";
						else{
							archivo<<q[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 3 : {archivo<<"EN QUE DIA DEL MES DE MARZO DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
		archivo<<G<<reco<<endl;
		if(dia == 12){
			archivo<<"EXAMEN DE SELECCION CEPRE-UNU"<<endl;
		}
		if(dia == 26){
			archivo<<"EXAMEN DE ADMISION ORDINARIO 2017 III"<<endl;
		}
		archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"MARZO"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(z[i][j]>=10)
					if(dia == z[i][j])
					archivo<<"["<<z[i][j]<<"]"<<" ";
					else{
						archivo<<z[i][j]<<"   ";
					}
					if(z[i][j]<10){
						if(dia == z[i][j])
						archivo<<"["<<z[i][j]<<"]"<<"  ";
						else{
							archivo<<z[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 4 :{archivo<<"EN QUE DIA DEL MES DE ABRIL DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"ABRIL"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<6;i++){
					for(int j = 0;j<7;j++){
					if(x[i][j]>=10)
					if(dia == x[i][j])
					archivo<<"["<<x[i][j]<<"]"<<" ";
					else{
						archivo<<x[i][j]<<"   ";
					}
					if(x[i][j]<10){
						if(dia == x[i][j])
						archivo<<"["<<x[i][j]<<"]"<<"  ";
						else{
							archivo<<x[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 5 :{archivo<<"EN QUE DIA DEL MES DE MAYO DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(h[i][j]>=10)
					if(dia == h[i][j])
					archivo<<"["<<h[i][j]<<"]"<<" ";
					else{
						archivo<<h[i][j]<<"   ";
					}
					if(h[i][j]<10){
						if(dia == h[i][j])
						archivo<<"["<<h[i][j]<<"]"<<"  ";
						else{
							archivo<<h[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 6 :{archivo<<"EN QUE DIA DEL MES DE JUNIO DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	 archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"JUNIO"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(g[i][j]>=10)
					if(dia == g[i][j])
					archivo<<"["<<g[i][j]<<"]"<<" ";
					else{
						archivo<<g[i][j]<<"   ";
					}
					if(g[i][j]<10){
						if(dia == g[i][j])
						archivo<<"["<<g[i][j]<<"]"<<"  ";
						else{
							archivo<<g[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 7 :{archivo<<"EN QUE DIA DEL MES DE JULIO DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
		archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"JULIO"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<6;i++){
					for(int j = 0;j<7;j++){
					if(t[i][j]>=10)
					if(dia == t[i][j])
					archivo<<"["<<t[i][j]<<"]"<<" ";
					else{
						archivo<<t[i][j]<<"   ";
					}
					if(t[i][j]<10){
						if(dia == t[i][j])
						archivo<<"["<<t[i][j]<<"]"<<"  ";
						else{
							archivo<<t[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 8 :{archivo<<"EN QUE DIA DEL MES DE AGOSTO DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"AGOSTO"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(v[i][j]>=10)
					if(dia == a[i][j])
					archivo<<"["<<v[i][j]<<"]"<<" ";
					else{
						archivo<<v[i][j]<<"   ";
					}
					if(a[i][j]<10){
						if(dia == v[i][j])
						archivo<<"["<<v[i][j]<<"]"<<"  ";
						else{
							archivo<<v[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 9 :{archivo<<"EN QUE DIA DEL MES DE SETIEMBRE DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"SETIEMBRE"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(e[i][j]>=10)
					if(dia == e[i][j])
					archivo<<"["<<e[i][j]<<"]"<<" ";
					else{
						archivo<<e[i][j]<<"   ";
					}
					if(e[i][j]<10){
						if(dia == e[i][j])
						archivo<<"["<<e[i][j]<<"]"<<"  ";
						else{
							archivo<<e[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 10:{archivo<<"EN QUE DIAL DEL MES DE OCTUBRE DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"OCTUBRE"<<endl;;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(f[i][j]>=10)
					if(dia == f[i][j])
					archivo<<"["<<f[i][j]<<"]"<<" ";
					else{
						archivo<<f[i][j]<<"   ";
					}
					if(f[i][j]<10){
						if(dia == f[i][j])
						archivo<<"["<<f[i][j]<<"]"<<"  ";
						else{
							archivo<<f[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 11:{archivo<<"EN QUE DIA DEL MES DE NOVIEMBRE DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
	archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"NOVIEMBRE"<<endl;;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(l[i][j]>=10)
					if(dia == l[i][j])
					archivo<<"["<<l[i][j]<<"]"<<" ";
					else{
						archivo<<l[i][j]<<"   ";
					}
					if(l[i][j]<10){
						if(dia == l[i][j])
						archivo<<"["<<l[i][j]<<"]"<<"  ";
						else{
							archivo<<l[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					}};break;
	case 12 :{archivo<<"EN QUE DIA DEL MES DE DICIEMBRE DESEA COLOCAR EL RECORDATORIO : "<<dia<<endl;
	archivo<<G<<reco<<endl;
		archivo<<"AQUI PUEDE VISUALIZAR EL DIA DEL RECORDATORIO"<<endl;
					archivo<<"DICIEMBRE"<<endl;
				for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<6;i++){
					for(int j = 0;j<7;j++){
					if(ll[i][j]>=10)
					if(dia == ll[i][j])
					archivo<<"["<<ll[i][j]<<"]"<<" ";
					else{
						archivo<<ll[i][j]<<"   ";
					}
					if(ll[i][j]<10){
						if(dia == ll[i][j])
						archivo<<"["<<ll[i][j]<<"]"<<"  ";
						else{
							archivo<<ll[i][j]<<"    ";
						}
					}
					}
					archivo<<"\n";
					};break;}};break;
	case 2 :{
		archivo<<"CALENDARIO DEL A�O 2017"<<endl;
	archivo<<"\nENERO"<<endl;
					for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(a[i][j]>=10)
					archivo<<a[i][j]<<"   ";
					if(a[i][j]<10){
					archivo<<a[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nFEBRERO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(q[i][j]>=10)
					archivo<<q[i][j]<<"   ";
					if(q[i][j]<10){
					archivo<<q[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nMARZO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(z[i][j]>=10)
					archivo<<z[i][j]<<"   ";
					if(z[i][j]<10){
					archivo<<z[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nABRIL"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(x[i][j]>=10) 
					archivo<<x[i][j]<<"   ";
					if(x[i][j]<10){
					archivo<<x[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nMAYO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(h[i][j]>=10)
					archivo<<h[i][j]<<"   ";
					if(h[i][j]<10){
					archivo<<h[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nJUNIO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(g[i][j]>=10)
					archivo<<g[i][j]<<"   ";
					if(g[i][j]<10){
					archivo<<g[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nJULIO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(t[i][j]>=10)
					archivo<<t[i][j]<<"   ";
					if(t[i][j]<10){
					archivo<<t[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nAGOSTO"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(v[i][j]>=10)
					archivo<<v[i][j]<<"   ";
					if(v[i][j]<10){
					archivo<<v[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nSETIEMBRE"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(e[i][j]>=10)
					archivo<<e[i][j]<<"   ";
					if(e[i][j]<10){
					archivo<<e[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nOCTUBRE"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(f[i][j]>=10)
					archivo<<f[i][j]<<"   ";
					if(f[i][j]<10){
					archivo<<f[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nNOVIEMBRE"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(l[i][j]>=10)
					archivo<<l[i][j]<<"   ";
					if(l[i][j]<10){
					archivo<<l[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					}	
	archivo<<"\nDICIEMBRE"<<endl;
	for(int d = 0; d<1;d++){
					for(int c = 0;c<7;c++){
					archivo<<b[d][c]<<"   ";
					}
					archivo<<"\n";
					}			
					for(int i = 0; i<5;i++){
					for(int j = 0;j<7;j++){
					if(ll[i][j]>=10)
					archivo<<ll[i][j]<<"   ";
					if(ll[i][j]<10){
					archivo<<ll[i][j]<<"    ";
					}
					}
					archivo<<"\n";
					};
					break;};break;
	case 3 : {
		
		archivo<<"INGRESE EL DIA : "<<dia1<<endl;
			archivo<<"INGRESE EL MES : "<<mes1<<endl;
		switch(mes1){
			case 1 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"ENERO"<<endl;break;
			case 2 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"FEBRERO"<<endl;break;
			case 3 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"MARZO"<<endl;break;
			case 4 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"ABRIL"<<endl;break;
			case 5 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"MAYO"<<endl;break;
			case 6 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"JUNIO"<<endl;break;
			case 7 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"JULIO"<<endl;break;
			case 8 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"AGOSTO"<<endl;break;
			case 9 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"SETIEMBRE"<<endl;break;
			case 10 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"OCTUBRE"<<endl;break;
			case 11 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"NOVIEMBRE"<<endl;break;
			case 12 : archivo<<"LA FECHA ES : "<<dia1<<" / "<<"DICIEMBRE"<<endl;break;
	}
		archivo<<"LA FECHA ES LA CORRECTA  : "<<resp<<endl;
	switch(mes1){
		case 1 : switch(dia1){
			case 1 : archivo<<"01/01/1986: El Inti se convierte en moneda oficial en el Per�."<<endl;break;
			case 2 : archivo<<"02/01/1553: Comienza a funcionar la Universidad de San Marcos en el Convento de Santo Domingo."<<endl;break;
			case 3 : archivo<<"03/01/1991: El Gobierno Peruano crea una nueva moneda: el Nuevo Sol."<<endl;break;
			case 4 : archivo<<"4/01/1643: Nace Isaac Newton, f�sico, fil�sofo, te�logo, inventor, alquimista y matem�tico ingl�s."<<endl;break;
			case 5 : archivo<<"05/01/1864: Se establece a Iquitos como la capital de Loreto."<<endl;break;
			case 6 : archivo<<"6/01/1953: Se inaugura oficialmente la Cl�nica San Juan de Dios."<<endl;break;
			case 7 : archivo<<"7/01/1610 : En Italia, Galileo Galilei observa cuatro de las lunas de J�piter a trav�s de su telescopio."<<endl;break;
			case 8 : archivo<<"8/01/2002: Patch Adams llega hasta el barrio de Bel�n, en Iquitos, para realizar trabajos de ayuda social con su reconocida metodolog�a �Comic relief�."<<endl;break;
			case 9 : archivo<<"9/01/1986: El joven Herbert Scavino es liberado por sus captores con una oreja cercenada, tras 75 d�as de cautiverio, en uno de los casos de secuestro m�s sonados en el Per�."<<endl;break;
			case 10 : archivo<<"10/01/1969: Lanzamiento de la sonda espacial sovi�tica Venera 6 a Venus, llegando a transmitir durante 51 minutos desde su atm�sfera."<<endl;break;
			case 11 : archivo<<"11/01/1986: En el Per� entra en vigencia el decreto legislativo que elimina el uso del papel sellado."<<endl;break;
			case 12 : archivo<<"12/01/1866: Chile y Per� ratifican un tratado de alianza ofensiva y defensiva para repeler las agresiones de la armada espa�ola, que pretend�a bloquear los puertos chilenos."<<endl;break;
			case 13 : archivo<<"13/01/1881: Batalla de San Juan entre tropas invasoras chilenas y fuerzas peruanas que custodiaban la capital."<<endl;break;
			case 14 : archivo<<"14/01/1866: En Per�, el gobierno formula una declaraci�n de guerra, al considerarse agraviado por el de Espa�a."<<endl;break;
			case 15 : archivo<<"15/01/1929: Nace Martin Luther King, pastor y activista por los derechos civiles de afroamericanos estadounidenses."<<endl;break;
			case 16 : archivo<<"16/01/1605: Se publica la primera edici�n de Don Quijote de la Mancha, escrita por Miguel de Cervantes Saavedra, obra cumbre de la literatura espa�ola."<<endl;break;
			case 17 : archivo<<"17/01/1958: Surge la televisi�n peruana cuando el ministro de Educaci�n, Jorge Basadre, inaugura el Canal 7."<<endl;break;
			case 18 : archivo<<"18/01/1911: Nace Jos� Mar�a Arguedas, escritor, antrop�logo y etn�logo peruano autor de �Los r�os profundos�."<<endl;break;
			case 19 : archivo<<"19/01/1880: El Congreso de los Diputados de Espa�a vota la abolici�n de la esclavitud en Cuba."<<endl;break;
			case 20 : archivo<<"20/01/2011: Muere en Lima, Luis Jaime Cisneros Vizquerra, ling�ista y docente universitario de la Universidad Nacional Mayor de San Marcos y de la Pontificia Universidad Cat�lica del Per�."<<endl;break;
			case 21 : archivo<<"21/01/1893: Se patenta la receta secreta de la Coca-Cola. A partir de ese momento la bebida comenz� a ser comercializada a nivel mundial."<<endl;break;
			case 22 : archivo<<"22/01/1826: En El Callao (Per�) se rinde la Fortaleza del Real Felipe, �ltimo reducto de la resistencia espa�ola en Sudam�rica."<<endl;break;
			case 23 : archivo<<"23/01/1941: Se publica la Ley N� 9300 que crea la provincia de Nasca, en Ica."<<endl;break;
			case 24 : archivo<<"24/01/1817: Fallece el abogado lime�o Jos� Baqu�jano y Carrillo."<<endl;break;
			case 25 : archivo<<"25/01/1947: Se crea el primer videojuego en Estados Unidos."<<endl;break;
			case 26 : archivo<<"26/01/1962: En Estados Unidos, la nave Ranger 3 despega para caer en la Luna. Pero la sonda espacial le erra a su blanco por 35 400 km."<<endl;break;
			case 27 : archivo<<"27/01/1967: Tres astronautas mueren al incendiarse la cabina de una nave durante el ensayo para la misi�n Apolo I."<<endl;break;
			case 28 : archivo<<"28/01/1985: En EE. UU. el grupo de artistas Usa for Africa graban la canci�n We Are The World, con fines ben�ficos."<<endl;break;
			case 29 : archivo<<"29/01/1985: Fallece el poeta peruano Mart�n Ad�n (Rafael de la Fuente Benavides)."<<endl;break;
			case 30 : archivo<<"30/01/1948: Es asesinado el l�der de la India Mahatma Gandhi."<<endl;break;
			case 31 : archivo<<"31/01/1822: en Per�, el Congreso le concede a la aldea de Trujillo el t�tulo de �ciudad benem�rita y fidel�sima a la Patria�."<<endl;break;
		};break;
	case 2 : switch(dia1){
			 case 1 : archivo<<"01/02/1985: El papa Juan Pablo II visita el Per� por primera vez."<<endl;break;
			 case 2 : archivo<<"02/02/1981: Per� y Ecuador firman un alto el fuego."<<endl;break;
			 case 3 : archivo<<"03/02/1895: Nace el pol�tico V�ctor Ra�l Haya de la Torre, uno de los pensadores m�s influyentes del siglo XX en el Per�, fundador del Partido Aprista Peruano."<<endl;break;
			 case 4 : archivo<<"04/02/1846: Se aprueba por primera vez, el Presupuesto General de la Rep�blica, durante el gobierno del Mariscal, Ram�n Castilla."<<endl;break;
			 case 5 : archivo<<"05/02/1985: Papa Juan Pablo II, se despide del Per� desde Iquitos, tras visita de cinco d�as. Estuvo reunido con los pobladores de Villa el Salvador."<<endl;
			 case 6 : archivo<<"06/02/1873: Bolivia y Per� firman un tratado secreto de alianza militar. Chile argumentar� ese tratado para declararle la guerra al Per� en 1879."<<endl;break;
			 case 7 : archivo<<"07/02/1833: Nace don Ricardo Palma, escritor, c�lebre tradicionalista, reconstructor de la Biblioteca Nacional saqueada por fuerzas chilenas, conocido como el <<bibliotecario mendigo>>, autor de: Tradiciones Peruanas."<<endl;break;
			 case 8 : archivo<<"08/02/1942: Nace en Lima, el m�dico Marcial Ayaipoma Alvarado, Presidente del Congreso de la Rep�blica (2005-2006)."<<endl;break;
			 case 9 : archivo<<"09/02/1991: El Gobierno peruano impone el estado de emergencia a causa de una epidemia de c�lera."<<endl;break;
			 case 10 : archivo<<"10/02/1823: El general, Sim�n Bol�var, es nombrado libertador del Per�."<<endl;break;
			 case 11 : archivo<<"11/02/1997: Se re�nen el Gobierno peruano y los miembros del Movimiento Revolucionario T�pac Amaru (MRTA) que han tomado rehenes en la residencia del Embajador japon�s."<<endl;break;
			 case 12 : archivo<<"12/02/1542: Francisco de Orellana descubre el r�o Amazonas. La expedici�n hab�a sido organizada por Gonzalo Pizarro en Cusco y Orellana se hab�a juntado a ella en Quito. Sin embargo, en un punto del camino ellos se separan, Pizarro regresa a Quito y Orellana sigue adelante, siendo el primer europeo en navegar todo el R�o Amazonas."<<endl;break;
			 case 13 : archivo<<"13/02/1578: Llega al Callao una escuadra pirata de cinco nav�os comandada por el almirante Francis Drake, primer corsario que asol� las costas del Per�."<<endl;break;
			 case 14 : archivo<<"14/02/1536: Las tropas de Hernando Pizarro que estaban sitiadas en el Cusco, hacen una salida y derrotan a los indios produci�ndose una masacre."<<endl;break;
			 case 15 : archivo<<"15/02/1824: El Congreso peruano otorg� el t�tulo de Mariscal de Ayacucho al patriota independentista venezolano, general Antonio Jos� de Sucre."<<endl;break;
			 case 16 : archivo<<"16/02/1933: Muere el Poeta, Domingo Mart�nez Luj�n."<<endl;break;
			 case 17 : archivo<<"17/02/1824: El Congreso de la Rep�blica nombra a Sim�n Bol�var dictador del Per� y suspende la Constituci�n."<<endl;break;
			 case 18 : archivo<<"18/02/1974:  Muere en Lima, el General Manuel A. Odr�a Amoretti, presidente del Per� (1948-1956)."<<endl;break;
			 case 19 : archivo<<"19/02/1939: Nace en Lima, el escritor Alfredo Bryce Echenique, autor de <<Un mundo para Julius>> y <<La vida exagerada de Mart�n Roma�a>>."<<endl;break;
			 case 20 : archivo<<"20/02/1564:  Por motivos pasionales es asesinado el virrey del Per�, Diego de Acevedo y Z��iga. Una ma�ana se le encontr� muerto en su lecho y se supo que hab�a perecido a manos de unos negros por orden de un esposo ofendido."<<endl;break;
			 case 21 : archivo<<"21/02/1536:  Hern�n Pizarro se apodera de la ciudad del Cusco."<<endl;break;
			 case 22 : archivo<<"22/02/1995: Conflicto del Cenepa: Tropas peruanas toman el control de <<Falso Tiwinza>>, un duplicado puesto ecuatoriano, situado en territorio peruano, en el Alto Cenepa, Amazonas."<<endl;break;	
			 case 23 : archivo<<"23/02/1935: Se funda el Instituto Sanmartiniano del Per�, el segundo m�s antiguo del mundo."<<endl;break;
			 case 24 : archivo<<"24/02/1927:  Nace Violeta Correa de Bela�nde, periodista y primera dama del Per� (1980-1985) se destac� por su incansable trabajo por los m�s pobres. Se cas� con el presidente Fernando Bela�nde Terry en 1971."<<endl;break;
			 case 25 : archivo<<"25/02/1778: Nace en Yapey�, Argentina, don Jos� de San Mart�n, Libertador de Argentina, Chile y Per�. Gobern� el Per� con el cargo de <<Protector>> (1821-1822)."<<endl;break;
			 case 26 : archivo<<"26/02/1954: Nace en Lima, el ingeniero Rafael Rey Rey, fundador del partido Renovaci�n Nacional, Congresista de la Rep�blica, Embajador del Per� y Ministro de Estado."<<endl;break;
			 case 27 : archivo<<"27/02/1868: Miguel Grau Seminario es nombrado comandante del monitor Hu�scar."<<endl;break;
			 case 28 : archivo<<"28/02/1865: Estalla en Arequipa la revoluci�n que encabeza el prefecto coronel Mariano Ignacio Prado."<<endl;break;
	};break;
	case 3 : switch(dia1){
			 case 1 : archivo<<"01/03/1914: Nace en Huaraz, Sarita Colonia Zambrano, santa popular, se hizo famosa por hacer milagros, muri� con fama de santidad y tiene gran veneraci�n en el Per�."<<endl;break;
			 case 2 : archivo<<"02/03/1951: Nace en Lima, Roberto Da�ino Zapata, Primer Ministro del Per� (2001-2002), Vicepresidente Senior del Banco Mundial."<<endl;break;
			 case 3 : archivo<<"03/03/1828: Colombia pide al Per� que en el plazo de seis meses le entregue Ja�n y Maynas, que pague su deuda de Independencia, que reduzca el n�mero de tropas en su frontera y que vuelva a aceptar al embajador colombiano que hab�a sido expulsado del Per�, entre otras exigencias m�s."<<endl;break;
			 case 4 : archivo<<"04/03/1987: El gobierno del presidente Alan Garc�a, admite incapacidad de combate frente a los terroristas de <<Sendero Luminoso>>."<<endl;break;
			 case 5 : archivo<<"05/03/1535: Francisco Pizarro oficializa la fundaci�n de la Ciudad de Trujillo de Nueva Castilla, en honor a su ciudad natal, Trujillo de Extremadura."<<endl;break;
			 case 6 : archivo<<"06/03/1928: En el pueblo de Aracataca, nace Gabriel Garcia M�rquez, escritor colombiano, Premio Nobel de Literatura en 1982, autor de <<Cien A�os de Soledad>> y <<Amor en los Tiempos del Colera>>."<<endl;break;
			 case 7 : archivo<<"07/03/2000: Los cancilleres de Chile, Juan Gabriel Vald�s, y del Per�, Fernando de Trazegnies, suscriben el Acta de entrega y recepci�n que pone fin a los asuntos pendientes del Tratado de 1929. Inauguran un Cristo de la Concordia en la cima del Morro de Arica."<<endl;break;
			 case 8 : archivo<<"08/03/1915: Nace la historiadora peruana Mar�a Rostworoski de Diez Canseco, autora del libro <<Historia del Tahuantinsuyo>>."<<endl;break;
			 case 9 : archivo<<"09/03/1825: El Congreso dispone que el departamento de Trujillo se denomine <<La Libertad>>."<<endl;break;
			 case 10 : archivo<<"10/03/1543: Se expide la C�dula que traslada la Real Audiencia creada en Panam� en 1538 a Lima, marcando el origen de los Tribunales Superiores de Justicia."<<endl;break;
			 case 11 : archivo<<"11/03/1914: Muere Don Ram�n Espinoza, insigne educador y patriota."<<endl;break;
			 case 12 : archivo<<"12/03/1560: Se coloca la primera piedra de la catedral de Cusco."<<endl;break;
			 case 13 : archivo<<"13/03/1873: Muere el Coronel Don Manuel Trinidad Odr�a."<<endl;break;
			 case 14 : archivo<<"14/03/1879: Nace en Ulm (Alemania), el sabio y f�sico Albert Einstein, creador de la Teor�a de la Relatividad."<<endl;break;
			 case 15 : archivo<<"15/03/1822: Se modifica la bandera peruana ideada por el Libertador San Mart�n, ahora ser�a con una franja blanca transversal entre dos encarnadas de la misma altura. El nuevo dise�o no prosper� porque se confud�a con la bandera espa�ola."<<endl;break;
			 case 16 : archivo<<"16/03/1956: Se crea la Provincia de Talara, en el Departamento de Piura."<<endl;break;
			 case 17 : archivo<<"17/03/1923: El pensador marxista Jos� Carlos Mari�tegui regresa al Per� luego de tres a�os de exilio por sus cr�ticas al gobierno de Augusto Legu�a."<<endl;break;
			 case 18 : archivo<<"18/03/1818: Llega al Callao el �ltimo cargamento oficial de esclavizados procedentes del �frica a bordo de la fragata Rita, que parti� de Santander (Espa�a)."<<endl;break;
			 case 19 : archivo<<"19/03/1738: Nace en Cusco, Jos� Gabriel Condorcanqui, conocido como T�pac Amaru II, lider� la m�s importante rebeli�n durante la Am�rica espa�ola."<<endl;break;
			 case 20 : archivo<<"20/03/2002: Un coche-bomba estalla en el distrito de Surco, en Lima, dejando 9 muertos y una treintena de heridos. La explosi�n se produjo cerca de la embajada de Estados Unidos, dos d�as antes de la llegada del presidente de ese pa�s, George W. Bush."<<endl;break;
			 case 21 : archivo<<"21/03/2001: Ante el Congreso, la Fiscal de la Naci�n, Nelly Calder�n, denuncia al ex presidente Alberto Fujimori como uno de los autores de la masacre de Barrios Altos, donde murieron 16 personas en 1991."<<endl;break;
			 case 22 : archivo<<"22/03/1910: Per� y Chile rompen sus relaciones diplom�ticas por las disputas sobre las provincias peruanas de Tacna y Arica."<<endl;break;
			 case 23 : archivo<<"23/03/1928: El pensador comunista Jos� Carlos Mari�tegui abandona el APRA y funda el Partido Comunista Peruano."<<endl;break;
			 case 24 : archivo<<"24/03/1825: Se establece por decreto la bandera y el escudo del Per� y se anula el pabell�n ideado en tiempos del general Jos� de San Mart�n."<<endl;break;
			 case 25 : archivo<<"25/03/2008: La Corte Suprema del Per� eval�a el pedido del ex presidente Alberto Fujimori para reducir la pena de 6 a�os de c�rcel por ordenar el allanamiento ilegal de la casa de su ex asesor, Vladimiro Montesinos."<<endl;break;
			 case 26 : archivo<<"26/03/1612: El Padre Luis de Valdivia es nombrado Visitador General de las provincias de Chile por el Virrey del Per�, para la implantaci�n de la guerra defensiva."<<endl;break;
			 case 27 : archivo<<"27/03/1883: Un incendio se produce en la Catedral de Lima, donde fallece el bombero de la compa��a Victoria N� 8, Francisco J. Fergunsson."<<endl;break;
			 case 28 : archivo<<"28/03/1946: Nace en Cabana (Ancash), el economista Alejandro Toledo Manrique, presidente del Per� (2001-2006)."<<endl;break;
			 case 29 : archivo<<"29/03/1813: Chile le declara la guerra al Virreinato del Per�. Es la primera, de tres veces que Chile le declara la guerra al Per�, las otras fueron en 1836 y 1879."<<endl;break;
			 case 30 : archivo<<"30/03/1822: Mar�a Parado de Bellido, mujer ayacuchana que se entreg� a la causa de la Independencia, es fusilada en la plaza de Ayacucho."<<endl;break;
			 case 31 : archivo<<"31/03/1813: Chile dispone el embargo de todos los buques del Virreinato del Per�, en el marco de la lucha por la Independencia."<<endl;break;
	}break;
	case 4 : switch(dia1){
			 case 1 : archivo<<"01/04/1528: En un d�a no determinado del mes de Abril llega el primer esclavo negro al Per�, el cual desembarc� junto a Alonso de Molina en Tumbes."<<endl;break;
			 case 2 : archivo<<"02/04/1822: Se crea el Museo Nacional de Arqueolog�a, Antropolog�a e Historia de Lima, como un espacio que albergue el testimonio de nuestros antepasados."<<endl;break;
			 case 3 : archivo<<"03/04/1822: La Municipalidad de Lima otorga al General Jos� de San Mart�n el estandarte de Francisco Pizarro en agradecimiento por la acci�n libertadora del militar argentino."<<endl;break;
			 case 4 : archivo<<"04/04/1994: Per� formaliza su regreso al Pacto Andino, tras casi dos a�os de ausencia."<<endl;break;
			 case 5 : archivo<<"05/04/1992: El presidente Alberto Fujimori cierra el Congreso e interviene el Poder Judicial, en lo que se conocer�a como el <<autogolpe>>."<<endl;break;
			 case 6 : archivo<<"06/04/1879: El Per� responde a la declaratoria de guerra chilena, declar�ndole tambi�n la guerra a Chile."<<endl;break;
			 case 7 : archivo<<"07/04/1879: Guerra del Pac�fico: debido al inicio de hostilidades, se corta toda comunicaci�n oficial entre la Rep�blica de Chile y la del Per� y Bolivia."<<endl;break;
			 case 8 : archivo<<"08/04/1928: Se juega el primer <<cl�sico>> del f�tbol peruano entre los equipos de Alianza Lima y Universitario de Deportes."<<endl;break;
			 case 9 : archivo<<"09/04/1995: Alberto Fujimori es reelegido presidente del Per�, con mayor�a absoluta."<<endl;break;
			 case 10 : archivo<<"10/04/1948: Muere en Lima el grumete afroperuano Alberto Medina Cecilia, H�roe naval y sobreviviente de la dotaci�n del Monitor Hu�scar."<<endl;break;
			 case 11 : archivo<<"11/04/1880: Nace en Huarochir� (Lima) el sabio Julio C. Tello, arqu�ologo y antrop�logo, descubridor de la cultura Paracas y estudioso de la cultura Chav�n, es considerado el <<Padre de la Arqueolog�a Peruana>>."<<endl;break;
			 case 12 : archivo<<"12/04/1539: Nace en el Cusco, el Inca Garcilaso de la Vega, escritor e historiador peruano, autor de <<Los Comentarios Reales de los Incas>>."<<endl;break;
			 case 13 : archivo<<"13/04/1578: Se realiza el segundo Auto de Fe en la Plaza Mayor. Fueron condenados dieciseis reos, fue quemado vivo el dominico fray Francisco de la Cruz, los dem�s recibieron azotes, destierros, prisi�n y multas."<<endl;break;
			 case 14 : archivo<<"14/04/1985: Alan Garc�a gana las elecciones presidenciales del Per� y se convierte en el mandatario m�s joven en la historia de la Naci�n. Su gobierno dej� al Per� al borde de la bancarrota econ�mica y el caos pol�tico y social."<<endl;break;
			 case 15 : archivo<<"15/04/1822: Se oficializa el Himno Nacional del Per�, con letra de Jos� de la Torre Ugarte y m�sica de Jos� Bernardo Alcedo."<<endl;break;
			 case 16 : archivo<<"16/04/1930: Muere en Lima, el pensador marxista, Jos� Carlos Mari�tegui, periodista, literato, pol�tico y ensayista, fundador del Partido Socialista Peruano (luego llamado Partido Comunista del Per�)), autor de <<7 ensayos de Interpretaci�n de la Realidad Peruana>>."<<endl;break;
			 case 17 : archivo<<"17/04/1879: El gobierno del general Mariano Ignacio Prado crea la �Junta Central de Ambulancias Civiles de la Cruz Roja�, que ser�a llamada Cruz Roja Peruana."<<endl;break;
			 case 18 : archivo<<"18/04/1828: Se produce un mot�n de militares pro-peruanos en Chuquisaca (Bolivia). Sucre es gravemente herido. Tropas peruanas invaden Bolivia."<<endl;break;
			 case 19 : archivo<<"19/04/1942: Muere en Lima, el poeta, Jos� Mar�a Eguren, el primer poeta simbolista y posmodernista de la literatura peruana."<<endl;break;
			 case 20 : archivo<<"20/04/1586: Nace Isabel Flores de Oliva, m�s conocida como Santa Rosa de Lima, religiosa dominica, la primera santa de Am�rica, patrona de Lima, Per�, el Nuevo Mundo y las Filipinas (otros dicen que naci� el 30 de Abril)."<<endl;break;
			 case 21 : archivo<<"21/04/1889: Nace en Lima, Manuel Prado Ugarteche, dos veces presidente de la Rep�blica (1939-1945 y 1956-1962), hijo del ex presidente Mariano Ignacio Prado, hermano de los pol�ticos Pedro Prado y Javier Prado y del h�roe nacional, Leoncio Prado."<<endl;break;
			 case 22 : archivo<<"22/04/1857: El Congreso dispone que la provincia del Callao se denomine <<Provincia Constitucional>>."<<endl;break;
			 case 23 : archivo<<"23/04/1616: Muere pobre, triste y desolado, Miguel de Cervantes Saavedra, autor de <<El Quijote de la Mancha>>."<<endl;break;
			 case 24 : archivo<<"24/04/1880: Muere en el Callao el Teniente Coronel Pedro Ruiz Gallo, por descuido de un ayudante, cuando preparaba un torpedo."<<endl;break;
			 case 25 : archivo<<"25/04/1534: Francisco Pizarro realiza la segunda fundaci�n de Jauja, despu�s de la fundaci�n espa�ola del Cusco."<<endl;break;
			 case 26 : archivo<<"26/04/1986: Se produce el mayor accidente nuclear de la historia, al explotar un reactor nuclear en Chernobil, al norte de Ucrania (URSS), y arrojar a la atm�sfera una radiaci�n equivalente a 500 bombas at�micas como la de Hiroshima."<<endl;break;
			 case 27 : archivo<<"27/04/1835: Charles Darwin inicia un viaje por tierra a lo largo de la costa de Per�."<<endl;break;
			 case 28 : archivo<<"28/04/1895: Nace en el Calla el compositor V�ctor Correa M�rquez."<<endl;break;
			 case 29 : archivo<<"29/04/2006: Gobierno resuelve retirar de inmediato a Carlos Urrutia, embajador en Caracas, por insistentes intromisiones del presidente venezolano Hugo Ch�vez en asuntos internos de pa�s."<<endl;break;
			 case 30 : archivo<<"30/04/1933: Muere asesinado en Lima, Luis Miguel S�nchez Cerro, presidente del Per� (1930-), a manos de un fan�tico aprista."<<endl;break;
	};break;
	case 5 : switch(dia1){
			 case 1 : archivo<<"01/05/1866: Tr�gica huelga en la ciudad de Chicago (Estados Unidos) gracias a la cual se conquistaron las 8 horas de trabajo diario."<<endl;break;
			 case 2 : archivo<<"02/05/1866: Combate del Dos de Mayo en el Callao, que puso fin a la dominaci�n espa�ola en Am�rica. "<<endl;break;
			 case 3 : archivo<<"03/05/1844: Nace en Tacna, Modesto Molina eminente poeta y periodista, en Tacna. Encargado de crear escuelas privadas peruanas durante la <<chilenizaci�n>> de Tacna, Arica y Tarapac�. Autor del Himno de Tacna."<<endl;break;
			 case 4 : archivo<<"04/05/1839: Aparece el primer n�mero del diario <<El Comercio>>, bajo el lema de <<Orden, Libertad y Saber>>, fundado por don Manuel Amun�tegui y don Alejandro Villota. Es el decano de la prensa peruana."<<endl;break;
			 case 5 : archivo<<"05/05/1887: Don Ricardo Palma funda la Academia Peruana de la Lengua. Su primer presidente fue Francisco Garc�a Calder�n, ex presidente del Per�."<<endl;break;
			 case 6 : archivo<<"06/05/1536: Se inicia la rebeli�n de Manco Inca que, a la vez que cercaba al Cusco, envi� contra Lima un ej�rcito de 60,000 nativos al mando de Quizo Yupanqui y de los capitanes Illa T�pac y Puyu Vilca."<<endl;break;
			 case 7 : archivo<<"07/05/1988: El Papa Juan Pablo II inicia viaje a Am�rica Latina, visitando Uruguay, Bolivia, Per� y Paraguay."<<endl;break;
			 case 8 : archivo<<"08/05/2002: El Municipio de Ilo ofrece a Bolivia un puerto de uso exclusivo en el Oc�ano Pacifico, como alternativa para las exportaciones de gas boliviano a USA y M�xico."<<endl;break;
			 case 9 : archivo<<"09/05/1551: Se establece la Universidad de Lima, en Per�."<<endl;break;
			 case 10 : archivo<<"10/05/1866: Las fuerzas espa�olas se retiran definitivamente del Per� luego de ser derrotados en la batalla del 2 de mayo y de haber enterrado sus muertos en la isla San Lorenzo."<<endl;break;
			 case 11 : archivo<<"11/05/1870: Luego de 15 meses de viaje, llegan al Callao los monitores Manco C�pac y Atahualpa, adquiridos al gobierno de Estados Unidos."<<endl;break;
			 case 12 : archivo<<"12/05/1827: El comandante colombiano, Jos� Bustamante es acusado de haber querido incorporar Guayaquil al Per� con sus tropas."<<endl;break;
			 case 13 : archivo<<"13/05/1647: A las 10 de la noche se produce un fuerte terremoto en Ica."<<endl;break;
			 case 14 : archivo<<"14/05/1939: La ni�a peruana, Lina Medina, se vuelve la madre m�s joven de la historia m�dica a la edad de 5 a�os, 7 meses y 21 d�as, hab�a comenzado a menstruar a los dos a�os y ocho meses. Nunca se supo qui�n fue el padre."<<endl;break;
			 case 15 : archivo<<"15/05/1963: A los 21 a�os de edad, muere en la selvas de Madre de Dios, Javier Heraud P�rez, poeta y guerrillero peruano."<<endl;break;
			 case 16 : archivo<<"16/05/2008: Se inaugura en Lima la V Cumbre de Am�rica Latina, el Caribe y la Uni�n Europea (ALC-UE Per� ) en la que participan cerca de 60 Presidentes y Jefes de Estado, y cuyos temas son la cohesi�n social y el cambio clim�tico."<<endl;break;
			 case 17 : archivo<<"17/05/1936: Se funda el Centro Musical Felipe Pinglo en Lima."<<endl;break;
			 case 18 : archivo<<"18/05/1980: Fernando Bela�nde Terry gana las elecciones presidenciales de Per�."<<endl;break;
			 case 19 : archivo<<"19/05/1837: La Confederaci�n Argentina declara la guerra a la Confederaci�n Per�-Boliviana, debido a problemas lim�trofes en Tarija y por el apoyo de Andr�s de Santa Cruz al Partido Unitario Argentino."<<endl;break;
			 case 20 : archivo<<"20/05/1945: Nace en Arequipa, Vladimiro Montesinos Torres, abogado y militar. Jefe de facto del Servicio de Inteligencia Nacional (SIN), desde el cual realiz� numerosos actos de corrupci�n."<<endl;break;
			 case 21 : archivo<<"21/05/1997: El astronauta peruano-estadounidense, Carlos Noriega, ofrece teleconferencia sobre la <<Nasa y el Trasbordador Atlantis>>. Fue el primer sudamericano en viajar al espacio."<<endl;break;
			 case 22 : archivo<<"22/05/1884: El tradicionalista Ricardo Palma recibe el encargo de reconstruir la Biblioteca Nacional tras la guerra con Chile."<<endl;break;
			 case 23 : archivo<<"23/05/1986: El escritor Mario Vargas Llosa recibe el Premio Pr�ncipe de Asturias de las Letras."<<endl;break;
			 case 24 : archivo<<"24/05/1940: Terremoto destruye gran parte del Callao. 179 muertos, m�s de 3 mil heridos y cientos de edificaciones destruidas."<<endl;break;
			 case 25 : archivo<<"25/05/1907: Muere en Tarma el Monse�or Manuel Tovar."<<endl;break;
			 case 26 : archivo<<"26/05/1802: En Madrid, a los 18 a�os, se casa el Libertador Sim�n Bolivar con la joven Mar�a Teresa Rodr�guez del Toro y Alayza, quien fallece ocho meses m�s tarde, en Caracas."<<endl;break;
			 case 27 : archivo<<"27/05/2007: En tr�gico accidente de tr�nsito, muere Sara Barreto <<Mu�equita Sally>>, cantante de m�sica folkl�rica."<<endl;break;
			 case 28 : archivo<<"28/05/1839: Nace en la Provincia de Pomabamba el Teniente Coronel Don Manuel Melgarejo S�enz."<<endl;break;
			 case 29 : archivo<<"29/05/2008: El Per� firma Tratados de Libre Comercio (TLCs) con Canad� y Singapur."<<endl;break;
			 case 30 : archivo<<"30/05/1783: Nace en Lima, Jos� de la Riva-Ag�ero y S�nchez Boquete, primer Presidente del Per� (1823) busc� conciliar con el Virrey y fue desterrado a Chile."<<endl;break;
			 case 31 : archivo<<"31/05/1822: Se establece el cambio de la bandera nacional, ahora ser�a de tres listas verticales, la del centro blanca y la de los extremos encarnados, y es as� desde entonces."<<endl;break;
	};break;
	case 6  :switch(dia1){
			 case 1 : cout<<"01/06/1985: El abogado y soci�logo, Alan Garc�a P�rez es elegido presidente a la edad de 36 a�os."<<endl;break;
			 case 2 : cout<<"02/06/1945: Muere en Lima, el Mariscal, Oscar Benavides Larrea, dos veces presidente del Per� (1914-1915 y 1933-1939)."<<endl;break;
			 case 3 : cout<<"03/06/1966: Se inaugura en I�ambari, el puente m�s largo del Per�, con 155 metros."<<endl;break;
			 case 4 : cout<<"04/06/2006: Alan Garc�a P�rez es electo por segunda vez como Presidente Constitucional de la Rep�blica del Per�, derrotando al nacionalista Ollanta Humala."<<endl;break;
			 case 5 : cout<<"05/06/1961: Nace en Lima, Fernando Iwasaki Cauti, escritor peruano, ganador del Premio Cop� de Narrativa (1998)."<<endl;break;
			 case 6 : cout<<"06/06/1963: El arquitecto Fernando Bela�nde Terry es elegido presidente constitucional de Per�."<<endl;break;
			 case 7 : cout<<"07/06/1964: Se registra uno de los inviernos m�s fr�os de Lima, la temperatura desciende a 9.4 grados Celsius."<<endl;break;
			 case 8 : cout<<"08/06/1962: Se crean los Colegios de Arquitectos y de Ingenieros en el Per�."<<endl;break;
			 case 9 : cout<<"09/06/1551: Se establece la Universidad de Lima, en Per�."<<endl;break;
			 case 10 : cout<<"10/06/1990: El desconocido ingeniero de origen japon�s, Alberto Fujimori Fujimori, derrota al famoso escritor Mario Vargas Llosa en la segunda vuelta de las elecciones presidenciales."<<endl;break;
			 case 11 : cout<<"11/06/1984: Denominan al dominio mar�timo peruano: <<Mar de Grau>>."<<endl;break;
			 case 12 : cout<<"12/06/1929: Nace Anna Frank ni�a judia autora del Diario de Anna Frank, muri� en un campo de concentraci�n."<<endl;break;
			 case 13 : cout<<"13/06/1823: Tropas espa�olas ocupan Lima. Extraen plata labrada de la Catedral y de las Iglesias de la capital, saquean la Biblioteca Nacional, incendian la Casa de Moneda."<<endl;break;
			 case 14 : cout<<"14/06/1850: El Gobierno de Ram�n Castilla promulga la Primera Ley de Instrucci�n P�blica para reglamentar la educaci�n en escuelas y colegios de la rep�blica."<<endl;break;
			 case 15 : cout<<"15/06/1882: El Congreso dispone que la villa de Lambayeque reciba el t�tulo de <<ciudad>> con el renombre de <<Generosa y Benem�rita>>."<<endl;break;
			 case 16 : cout<<"16/06/1909: Nace en Piura, el General Juan Velasco Alvarado, Presidente de la Rep�blica (1968-1975) durante la <<Primera fase>> del Gobierno Revolucionario de las Fuerzas Armadas, de corte socialista."<<endl;break;
			 case 17 : cout<<"17/06/1578: Se produce un fuerte terremoto en Lima."<<endl;break;
			 case 18 : cout<<"18/06/1986: En las c�rceles de Lima se produce un mot�n, dirigido por los presos acusados de terrorismo."<<endl;break;
			 case 20 : cout<<"20/06/1962: El ingeniero peruano Jorge Grieve es designado entre los <<9 sabios>>por la OEA."<<endl;break;
			 case 21 : cout<<"21/06/1825: El Libertador Jos� de San Mart�n crea el distrito de San Jer�nimo, en la provincia de Andahuaylas."<<endl;break;
			 case 22 : cout<<"22/06/1983: Se registra el primer caso de Sida en Per�."<<endl;break;
			 case 23 : cout<<"23/06/1823: El presidente Jos� de la Riva-Ag�ero es depuesto por el Congreso. Poco tiempo despu�s volvi� al cargo y m�s tarde fu� apresado."<<endl;break;
			 case 24 : cout<<"24/06/1969: Disponen que es gratuita la ense�anza primaria, secundaria y magisterial en el Per�."<<endl;break;
			 case 25 : cout<<"25/06/1825:  El Libertador Sim�n Bolivar llega al Cusco, donde recibe una corona de oro, adem�s de diamantes, perlas y otras joyas, tambi�n recibe las llaves de la ciudad."<<endl;break;
			 case 26 : cout<<"26/06/1945: Se crea la ONU al firmarse la <<Carta de las Naciones Unidas>> por representantes de 50 pa�ses, en San Francisco, Estados Unidos."<<endl;break;
			 case 27 : cout<<"27/06/1829: Se celebra un Armisticio en el Per�."<<endl;break;
			 case 28 : cout<<"28/06/2009: La ciudad sagrada de Caral es declarada por la UNESCO como Patrimonio Cultural de la Humanidad."<<endl;break;
			 case 29 : cout<<"29/06/1823: Fusilan a Jos� Olaya Balandra, pescador patriota chorrillano, apresado por el ej�rcito realista sufri� 200 palazos y le arrancaron las u�as pero no delat� a sus compa�eros."<<endl;break;
			 case 30 : cout<<"30/06/1857: Manuel Ignacio de Vivanco recibe del pueblo Yumina (Arequipa) el t�tulo de Mariscal de Yumina."<<endl;break;
	};break;
	case 7 : switch(dia1){
			 case 1 : cout<<"01/07/1959: Se crea la C�mara Peruana de la Construcci�n."<<endl;break;
			 case 2 : cout<<"02/07/1936: Se promulga el C�digo Civil."<<endl;break;
			 case 3 : cout<<"03/07/2008: Por primera vez llega al Per�, el espect�culo de lucha libre de la WWE."<<endl;break;
			 case 4 : cout<<"04/07/1919: El presidente peruano Jos� Pardo y Barrera es derrocado y sustituido provisionalmente por Augusto B. Legu�a."<<endl;break;
			 case 5 : cout<<"05/07/1869: Se firma Contrato Dreyffus en Par�s."<<endl;break;
			 case 6 : cout<<"06/07/1822: El general don Jos� de San Mart�n cre� la primera escuela normal del Per�."<<endl;break;
			 case 7 : cout<<"07/07/2007: Machu Picchu es declarada una de las Nuevas Maravillas del Mundo en una ceremonia realizada en Lisboa (Portugal)."<<endl;break;
			 case 8 : cout<<"08/07/1538: Diego de Almagro es ejecutado al garrote en Cusco, su cad�ver es decapitado y su cabeza expuesta en la plaza p�blica. Sus restos fueron sepultados en la Iglesia de La Merced del Cusco."<<endl;break;
			 case 9 : cout<<"09/07/1919: Augusto B. Legu�a, que se hab�a erigido Jefe de Estado, es nombrado Presidente Provisorio por una Asamblea Constituyente, que �l habia convocado."<<endl;break;
			 case 10 : cout<<"10/07/1967: Se funda Federaci�n de Artesanos del Per�."<<endl;break;
			 case 11 : cout<<"11/07/1830: Nace Jos� Sebasti�n Barranca, naturista, presidente fundador de la la Academia Nacional de Ciencias del Per�."<<endl;break;
			 case 12 : cout<<"12/07/1821: El Libertador Don Jos� de San Mart�n, hace su entrada en Lima"<<endl;break;
			 case 13 : cout<<"13/07/1821: El General don Jos� de San Mart�n decreta la abolici�n de la Constituci�n espa�ola, disponiendo que entrara en vigencia el Reglamento Provisional de Huaura."<<endl;break;
			 case 14 : cout<<"14/07/1928: Nace Ernesto <<Che>> Guevara, revolucionario argentino."<<endl;break;
			 case 15 : cout<<"15/07/1828: El Gobierno de Colombia env�a al Per� un manifiesto en el que expone los motivos por los cuales le har� la guerra al Per�."<<endl;break;
			 case 16 : cout<<"16/07/1823: Las tropas espa�olas abandonan Lima, luego de extraer la plata labrada de la Catedral y de las iglesias de la capital, saquean la Biblioteca Nacional, incendian la Casa de la Moneda."<<endl;break;
			 case 17 : cout<<"17/07/1978: Victoria de V�ctor Ra�l Haya de la Torre en las elecciones peruanas para la Asamblea Constituyente."<<endl;break;
			 case 18 : cout<<"18/07/1962: Golpe militar derroca al presidente Manuel Prado, acusado de parcialidad ante el proceso electoral."<<endl;break;
			 case 19 : cout<<"19/07/1911: Per� y Colombia firman en Bogot�, el <<Convenio de Statu Quo>> y liberaci�n de prisioneros."<<endl;break;
			 case 20 : cout<<"20/07/2002: Un pavoroso incendio en la exclusiva discoteca <<Utop�a>> del Jockey Plaza de Lima deja un saldo de 29 muertos y 45 heridos."<<endl;break;
			 case 21 : cout<<"21/07/1821: Se instala en Lima, el primer Consejo de Gobierno presidido por Jos� de San Mart�n."<<endl;break;
			 case 22 : cout<<"22/07/1983: Per� decide poner fin a caza de la ballena."<<endl;break;
			 case 23 : cout<<"23/07/1948: El peruano Daniel Cargio cruza a nado el estrecho de Gibraltar en 9 horas y 20 minutos y se convierte en el primer nadador que realiza esta proeza."<<endl;break;
			 case 24 : cout<<"24/07/1977: El escritor Mario Vargas Llosa ingresa a la Academia Peruana de la Lengua."<<endl;break;
			 case 25 : cout<<"25/07/1963: Creaci�n del Colegio M�dico del Per�."<<endl;break;
			 case 26 : cout<<"26/07/1904: Se inaugura el tranv�a el�ctrico Lima-Callao."<<endl;break;
			 case 27 : cout<<"27/07/2002: Una expedici�n de exploradores, liderada por Jacek Palkiewicz, afirma haber descubierto <<El Dorado>>, la m�tica ciudad inca de Paititi, en una zona colindante con el parque nacional del Manu, entre los departamentos peruanos de Cuzco y Madre de Dios."<<endl;break;
			 case 28 : cout<<"28/07/1884: Se reabre Biblioteca Nacional bajo direcci�n de don Ricardo Palma."<<endl;break;
			 case 29 : cout<<"29/07/1905: Se funda el Instituto Hist�rico del Per�."<<endl;break;
			 case 30 : cout<<"30/07/1889: Nace Juan Bielovucic, uno de los precursores de la aviaci�n, en el Per�."<<endl;break;
			 case 31 : cout<<"31/07/1941: Fuerzas peruanas toman Puerto Bol�var en Ecuador, durante la Guerra Peruano-Ecuatoriana. Es el primer combate en el hemisferio en el que intervinieron tropas aerotransportadas."<<endl;break;
			case 32: cout<<"BONILLA ME LA CHUPA :3"<<endl;break;
	};break;
	case 8 : switch(dia1){
			 case 1 : cout<<"01/08/1816: Don Jos� de San Mart�n es nombrado Comandandante General del Ej�rcito de los Andes."<<endl;break;
			 case 2 : cout<<"02/08/1979: Muere en Lima, V�ctor Ra�l Haya de la Torre, Presidente de la Asamblea Constituyente de 1978, fundador de la Alianza Popular Revolucionaria Americana (APRA)."<<endl;break;
			 case 3 : cout<<"03/08/1968: Guerrilleros peruanos intentan ingresar al pa�s por Madre de Dios, desde Bolivia."<<endl;break;
			 case 4 : cout<<"04/08/1540: Se funda la ciudad de Yungay (Ancash) y el Convento de Santo Domingo de Yungay."<<endl;break;
			 
	};break;
};break;}
}
}


