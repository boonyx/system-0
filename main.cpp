#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class calc {

    float firstv, secondv;

public:

    void res(){

    }

    float add() {
        return firstv + secondv;
    }

    float subs() {
        return firstv - secondv;
    }

    float mul() {
        return firstv * secondv;
    }

    float divide() {
        if (secondv == 0) {
            cout << "Division by 0. \n";
            return INFINITY;
        } else {
            return firstv / secondv;
        }
    }

    /*   struct exo{
           string name;
           string sub;
           float glimmer;
           int shards;
       };
       exo bro[32][32];
       bro[0][0].name = "Sweet Business ";
       bro[0][0].sub = "Auto Rifle \n";
       bro[0][0].glimmer = 2.500;
       bro[0][0].shards = 20;

   string weapons(){
       struct wep{
           string name;
           int glimmer;
           int shards;
       };



   }

   string armor(){
       struct armo{
           string name;
           int glimmer;
           int shards;
       };



   }
*/

};


int main() {
    int ch, xi;
    calc c;

    struct exo : public error_code {
        string name;
        string sub;
        float glimmer;
        int shards;
    };

    exo bro[32];
    bro[0].name = "Sweet Business ";
    bro[0].sub = "Auto Rifle \n";
    bro[0].glimmer = 2.500;
    bro[0].shards = 20;

    bro[1].name = "Sturm ";
    bro[1].sub = "Hand Cannon \n";
    bro[1].glimmer = 2.500;
    bro[1].shards = 20;

    bro[2].name = "Vigilance Wing ";
    bro[2].sub = "Pulse Rifle \n";
    bro[2].glimmer = 2.500;
    bro[2].shards = 20;

    bro[3].name = "Rat King ";
    bro[3].sub = "Sidearm \n";
    bro[3].glimmer = 2.500;
    bro[3].shards = 20;

    bro[4].name = "MIDA Multi-Tool ";
    bro[4].sub = "Scout Rifle \n";
    bro[4].glimmer = 2.500;
    bro[4].shards = 20;

    bro[5].name = "Crimson ";
    bro[5].sub = "Hand Cannon \n";
    bro[5].glimmer = 2.500;
    bro[5].shards = 20;

    bro[6].name = "The Jade Rabbit ";
    bro[6].sub = "Scout Rifle \n";
    bro[6].glimmer = 2.500;
    bro[6].shards = 20;

    bro[7].name = "The Huckleberry ";
    bro[7].sub = "Submachine Gun \n";
    bro[7].glimmer = 2.500;
    bro[7].shards = 20;

    bro[8].name = "SUROS Regime ";
    bro[8].sub = "Auto Rifle \n";
    bro[8].glimmer = 2.500;
    bro[8].shards = 20;

    bro[9].name = "Cerberus+1 ";
    bro[9].sub = "Auto Rifle \n";
    bro[9].glimmer = 2.500;
    bro[9].shards = 20;

    bro[10].name = "Wish Ender ";
    bro[10].sub = "Bow \n";
    bro[10].glimmer = 2.500;
    bro[10].shards = 20;

    bro[11].name = "Malfeasance ";
    bro[11].sub = "Hand Cannon \n";
    bro[11].glimmer = 2.500;
    bro[11].shards = 20;

    bro[12].name = "Ace of Spades ";
    bro[12].sub = "Hand Cannon \n";
    bro[12].glimmer = 2.500;
    bro[12].shards = 20;

    bro[13].name = "The Chaperone";
    bro[13].sub = "Shotgun \n";
    bro[13].glimmer = 2.500;
    bro[13].shards = 20;

    bro[14].name = "Izanagi's Burden";
    bro[14].sub = "Sniper Rifle \n";
    bro[14].glimmer = 2.500;
    bro[14].shards = 20;

    bro[15].name = "The Last Word";
    bro[15].sub = "Hand Cannon \n";
    bro[15].glimmer = 2.500;
    bro[15].shards = 20;
/*
    bro[].name = "";
    bro[].sub = "";
    bro[].glimmer = 2.500;
    bro[].shards = 20;
*/
    bro[16].name = "Arbalest";
    bro[16].sub = "Linear Fusion Rifle \n";
    bro[16].glimmer = 2.500;
    bro[16].shards = 20;

    bro[17].name = "Thorn";
    bro[17].sub = "Hand Cannon \n";
    bro[17].glimmer = 2.500;
    bro[17].shards = 20;

    bro[18].name = "Outbreak Perfected";
    bro[18].sub = "Pulse Rifle \n";
    bro[18].glimmer = 2.500;
    bro[18].shards = 20;

    bro[19].name = "Bad Juju";
    bro[19].sub = "Pulse rifle \n";
    bro[19].glimmer = 2.500;
    bro[19].shards = 20;

    bro[20].name = "Lumina";
    bro[20].sub = "Hand Cannon \n";
    bro[20].glimmer = 2.500;
    bro[20].shards = 20;

    bro[21].name = "Monte Carlo";
    bro[21].sub = "Autio Rifle \n";
    bro[21].glimmer = 2.500;
    bro[21].shards = 20;

    bro[22].name = "Bastion";
    bro[22].sub = "Fusion Rifle \n";
    bro[22].glimmer = 2.500;
    bro[22].shards = 20;

    bro[23].name = "Witherhoard";
    bro[23].sub = "Grenade Launcher \n";
    bro[23].glimmer = 2.500;
    bro[23].shards = 20;

    bro[24].name = "Traveler's Chosen";
    bro[24].sub = "Sidearm \n";
    bro[24].glimmer = 2.500;
    bro[24].shards = 20;

    bro[25].name = "No Time To Explain";
    bro[25].sub = "Pulse Rifle \n";
    bro[25].glimmer = 2.500;
    bro[25].shards = 20;

    bro[26].name = "Hawkmoon";
    bro[26].sub = "Hand Cannon \n";
    bro[26].glimmer = 2.500;
    bro[26].shards = 20;

    bro[27].name = "Dead Man's Tale";
    bro[27].sub = "Scout Rifle \n";
    bro[27].glimmer = 2.500;
    bro[27].shards = 20;

    bro[28].name = "Cryosthesia 77K";
    bro[28].sub = "Sidearm \n";
    bro[28].glimmer = 2.500;
    bro[28].shards = 20;

    bro[29].name = "Ager's Scepter";
    bro[29].sub = "Trace Rifle \n";
    bro[29].glimmer = 2.500;
    bro[29].shards = 20;

    bro[30].name = "Forerunner";
    bro[30].sub = "Sidearm \n";
    bro[30].glimmer = 2.500;
    bro[30].shards = 20;

    bro[31].name = "Osteo Striga";
    bro[31].sub = "Submachine Gun \n";
    bro[31].glimmer = 2.500;
    bro[31].shards = 20;
/*
    cout << "Forerunner \n";
    cout <<  bro[30][30].name;
*/

    cout << "Press 1 to show exotics. \n";
    cout << "Press 2 to show weapons. \n";
    cout << "Press 3 to show armor. \n";
    cin >> ch;

switch (ch){
    case 1:
        for(xi = 0; xi<31; xi++){
            cout << bro[xi];
        }

        break;

    case 2:
        break;
}




    return EXIT_SUCCESS;
}
