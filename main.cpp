# include <iostream>

using namespace std;

int main(){
    //The average tank size of the car
    const int tankSize = 20;
    //The miles per gallon in the town
    const double mpgTown = 23.5;
    //The miles per gallon in the highway
    const double mpgHighway = 28.9;

    //Calculates the distance made driving in town
    double distanceTown = tankSize * mpgTown;
    cout << "The distance travelled in town is " << distanceTown;

    //Calculates the distance made driving in town
    double distanceHighway = tankSize * mpgHighway;
    cout << "The distance travelled in town is " << distanceHighway;

    return 0;
}