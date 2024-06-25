#include <iostream>
#include <string.h>

using namespace std;

#define MAX_REGISTERS 50
#define MAX_APPOINTMENTS 50

//para convertir precios 
#define EXCHANGE_RATE 36.5 // Tasa de cambio ejemplo de dólar a córdobas


struct SCHEDULE{
    char hour[3];
    char minute[3]; 
};

struct DATE{
    char day[3];
    char year[5];
    char month[3];
};

struct APPOINTMENT{
    int id;
    char namePatient[20];
    char treatment[50];
    SCHEDULE time;
    DATE dates;
};

struct REGISTER{
    int id;
    char name[20];
    char lastName[20];
    char address[30];
    char number[10];
    char gender[10];
    char age[3];
    char consultationReason[30];
    char medicalHistory[50];
};