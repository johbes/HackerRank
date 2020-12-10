#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop{
    int startTime;
    int duration;
    int endTime;
};

struct Available_Workshops{
    int n;
    Workshop* workShops = new Workshop[n];
    ~Available_Workshops(){
        delete[] workShops;
    }
};

Available_Workshops* initialize(int start_time[], int duration[], int n){
    Available_Workshops* availWorkShops = new Available_Workshops();
    availWorkShops -> n = n;
    for(int i = 0;i < n;i++){
        (availWorkShops->workShops)[i].startTime = start_time[i];
        (availWorkShops->workShops)[i].duration = duration[i];
        (availWorkShops->workShops)[i].endTime = start_time[i] + duration[i];
    }
    return availWorkShops;
}

int CalculateMaxWorkshops(Available_Workshops *ptr){
    int nrOfWorkshops = ptr -> n;
    Workshop* tmpPtr = ptr->workShops;
    int counter = 0;
    
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
