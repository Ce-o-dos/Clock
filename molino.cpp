#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int minutes(){
    // Obtener el tiempo actual en formato time_t
    time_t current_time = time(nullptr);

    // Obtener una estructura de tiempo local
    struct tm time_info = *localtime(&current_time);

    // Almacenar la hora, minuto y segundo en variables
    int minute = time_info.tm_min;

    return minute;
}

int hours(){
    // Obtener el tiempo actual en formato time_t
    time_t current_time = time(nullptr);

    // Obtener una estructura de tiempo local
    struct tm time_info = *localtime(&current_time);

    // Almacenar la hora, minuto y segundo en variables
    int hour = time_info.tm_hour;

    return hour;
}


int seconds(){
    // Obtener el tiempo actual en formato time_t
    time_t current_time = time(nullptr);

    // Obtener una estructura de tiempo local
    struct tm time_info = *localtime(&current_time);

    // Almacenar la hora, minuto y segundo en variables
    int second = time_info.tm_sec;

    return second;
}

void circle(float start_domanion, float end_domain, int radio, int** plane){

    for (float i=start_domanion; i <= end_domain; i = i + 0.01){
        int x = round(15 + radio*sin(i));
        int y = round(15 + radio*cos(i));

        plane[x][y] = 1;
    };
}
void line(char number, float start_domain, float end_domain, float m, int y_disface, int x_disface,  int** plane){

    for (float i = start_domain; i <= end_domain; i = i+0.5){
        int x = i+x_disface;        
        int y = floor(i * m + y_disface);

        plane[y][x] = number;

    }
}

void horizontal_line(char number,float start_domain, float end_domain, int y_disface, int x_disface,  int** plane){

    for (int i = start_domain; i <= end_domain; i++){

        int x = 0+x_disface;        
        int y = i+y_disface;

        plane[y][x] = number;

    }
}

void repaint_clock(int filas, int columnas, int** plane){
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            plane[i][j] = 0;            
        }
    }
}

void show_clock(int filas, int columnas, int** plane, int second, int minute, int hour){
    
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (plane[i][j] == 0){
                cout << "    ";
            } else if(plane[i][j] == 1){
                cout << "╬╬╬╬";

            } else if(plane[i][j] == 2){

                if (second <= 9){
                    cout << second << "   ";
                } else {
                    cout << second << "  ";
                }
                
            } else if (plane[i][j] == 3){
                if (minute <= 9){
                    cout << minute << "   ";
                } else {
                    cout << minute << "  ";
                }

            } else if (plane[i][j] == 4) {
                if (hour <= 9){
                    cout << hour << "   ";
                } else {
                    cout << hour << "  ";
                }

            }
        }
        cout << endl;
        cout << endl; 
    }
}

void pointers(char number, int time, int** plane, short cut){
                switch (time)
            {
            case 0:
                horizontal_line(number,-14+cut,0,15,15,plane);
                break;
            case 1:
            system("clear");
                line(number,0,1.9-cut, -8.81,15,15,plane);
                break;
            
            case 2:
            system("clear");
                line(number,0,3-cut, -4.76,15,15,plane);
                break;

            case 3:
            system("clear");
                line(number,0,4.5-cut, -3.11,15,15,plane);
                break;
            
            case 4:
            system("clear");
                line(number,0,5-cut, -2.5,15,15,plane);
                break;
            
            case 5:
            system("clear");
                line(number,0,7-cut,-1.74,15,15,plane);
                break;

            case 6:
                line(number,0,8-cut, -1.39,15,15,plane);
                break;
            
            case 7:
                line(number,0,9-cut, -1.12,15,15,plane);
                break;

            case 8:
                line(number,0,9.5-cut, -0.92,15,15,plane);
                break;
            
            case 9:
                line(number,0,11.5-cut, -0.74,15,15,plane);
                break;
            
            case 10:
                line(number,0,12-cut,-0.58,15,15,plane);
                break;
            
            case 11:
                line(number,0,13-cut, -0.4,15,15,plane);
                break;

            case 12:
                line(number,0,14-cut, -0.3,15,15,plane);
                break;
            
            case 13:
                line(number,0,13-cut, -0.21,15,15,plane);
                break;

            case 14:
                line(number,0,14.5-cut, -0.11,15,15,plane);
                break;
            
            case 15:
                line(number,0,14-cut,0,15,15,plane);
                break;
            
            case 16:
                line(number,0,14.5-cut, 0.11,15,15,plane);
                break;

            case 17:
                line(number,0,13-cut, 0.21,15,15,plane);
                break;
            
            case 18:
                line(number,0,13-cut, 0.3,15,15,plane);
                break;

            case 19:
                line(number,0,13-cut, 0.4,15,15,plane);
                break;
            
            case 20:
                line(number,0,12.5-cut, 0.55,15,15,plane);
                break;

            case 21:
                line(number,0,11-cut, 0.74,15,15,plane);
                break;

            case 22:
                line(number,0,11-cut, 0.92,15,15,plane);
                break;
            case 23:
                line(number,0,10-cut, 1.12,15,15,plane);
                break;
            
            case 24:
                line(number,0,9-cut, 1.39,15,15,plane);
                break;

            case 25:
                line(number,0,7-cut,1.74,15,15,plane); //---
                break;
            
            case 26:
                line(number,0,5-cut, 2.5,15,15,plane);//;
                break;
            
            case 27:
                line(number,0,4-cut, 3.11,15,15,plane);
                break;

            case 28:
                line(number,0,3-cut, 4.76,15,15,plane);
                break;
            
            case 29:
                line(number,0,1.5-cut, 8.81,15,15,plane);
                break;

            case 30:
                horizontal_line(number,0,14.5-cut,15,15,plane);
                break;

            case 31:
            system("clear");
                line(number,-1.5+cut,0, -8.81,15,15,plane);
                break;
            
            case 32:
            system("clear");
                line(number,-3+cut,0, -4.76,15,15,plane);
                break;

            case 33:
            system("clear");
                line(number,-4.5+cut,0, -3.11,15,15,plane);
                break;
            
            case 34:
            system("clear");
                line(number,-5+cut,0, -2.5,15,15,plane);
                break;
            
            case 35:
            system("clear");
                line(number,-7+cut,0,-1.74,15,15,plane);
                break;

            case 36:
                line(number,-8+cut,0, -1.39,15,15,plane);
                break;
            
            case 37:
                line(number,-9+cut,0, -1.12,15,15,plane);
                break;

            case 38:
                line(number,-9.5+cut,0, -0.92,15,15,plane);
                break;
            
            case 39:
                line(number,-11.5+cut,0, -0.74,15,15,plane);
                break;
            
            case 40:
                line(number,-12+cut,0,-0.58,15,15,plane);
                break;
            
            case 41:
                line(number,-13+cut,0, -0.4,15,15,plane);
                break;

            case 42:
                line(number,-14+cut,0, -0.3,15,15,plane);
                break;
            
            case 43:
                line(number,-13+cut,0, -0.21,15,15,plane);
                break;

            case 44:
                line(number,-14.5+cut,0, -0.11,15,15,plane);
                break;
            
            case 45:
                line(number,-14+cut,0,0,15,15,plane);// HASTA EL 25 ESTA BIEN
                break;
            
            case 46:
                line(number,-14.5+cut,0, 0.11,15,15,plane);
                break;

            case 47:
                line(number,-13+cut,0, 0.21,15,15,plane);
                break;
            
            case 48:
                line(number,-13+cut,0, 0.3,15,15,plane);
                break;

            case 49:
                line(number,-13+cut,0, 0.4,15,15,plane);
                break;
            
            case 50:
                line(number,-12.5+cut,0, 0.55,15,15,plane);
                break;

            case 51:
                line(number,-11+cut,0, 0.74,15,15,plane);
                break;

            case 52:
                line(number,-11+cut,0, 0.92,15,15,plane);
                break;
            case 53:
                line(number,-10+cut,0, 1.12,15,15,plane);
                break;
            
            case 54:
                line(number,-8+cut,0, 1.39,15,15,plane);
                break;

            case 55:
                line(number,-7+cut,0,1.74,15,15,plane); //---
                break;
            
            case 56:
                line(number,-5+cut,0, 2.5,15,15,plane);//;
                break;
            
            case 57:
                line(number,-4+cut,0, 3.11,15,15,plane);
                break;

            case 58:
                line(number,-3+cut,0, 4.76,15,15,plane);
                break;
            
            case 59:
                line(number,-1.5+cut,0, 8.81,15,15,plane);
                break;

             case 60:
                horizontal_line(number,-14+cut,0.5,15,15,plane);
                break;           
        }
}

int main() {
    int filas, columnas;
    filas = 31;
    columnas = 31;
    int** plane = new int*[filas];
    for (int i = 0; i <= filas; ++i) {
        plane[i] = new int[columnas];
        for (int j = 0; j <= columnas; ++j) {
            plane[i][j] = 0;
        }
    }
    
short last_second = seconds();

    while (true) {     

        short second = seconds(); 
        short hour = hours(); 
        short minute = minutes(); 

            if (second != last_second) {
            
            system("clear");
            circle(0, 6.28, 15, plane);

            pointers(2,second, plane,0);
            pointers(3,minute, plane,2);
            pointers(4,hour+8, plane,2);

            
            show_clock(filas, columnas, plane, second, minute, hour);
            
            repaint_clock(31,31,plane);


            cout << second << endl;

            last_second = second;
        }

        
    }
        


}



