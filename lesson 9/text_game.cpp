#include <iostream>
#include <ctime>

using namespace std;

struct items {
    bool key;
    bool red_key;
    bool coat;
    bool torn_notebook;
};

void init_inventory(items *inventory) {
    inventory->key = false;
    inventory->red_key = false;
    inventory->coat = false;
    inventory->torn_notebook = false;
};

struct skills {
    int defence;
    int strenght;
};

void init_stats(skills *stats) {
    stats->defence = 0;
    stats->strenght = 2; 
};

void first_room_interactions(items *inventory, skills *stats, bool *can_go_out, int *room) {
    int interaction = 0;
    int take_put = 0;
    cout << "You find yourself in a room. Interact with:\n1.the chest 2.the wardrobe 3.the table 4.the red door: ";
    cin >> interaction;
    switch (interaction) {
        case 1:
            if (inventory->red_key == true) {
                cout << "Do you want to put back the red key?\n1.yes 2.no ";
                cin >> take_put;
                if (take_put == 1) {
                    inventory->red_key = false;
                }
            } else {
                cout << "There's a red key in the chest. Take the RED KEY?\n1.yes 2.no ";
                cin >> take_put;
                if (take_put == 1) {
                    inventory->red_key = true;
                }
            }
            break;
        case 2:
         if (inventory->coat == true) {
                cout << "Do you want to put back the THICK COAT?\n1.yes 2.no ";
                cin >> take_put;
                if (take_put == 1) {
                    inventory->coat = false;
                }
            }
            cout << "There's a coat hanging the wardrobe. Take the THICK COAT?\n1.yes 2.no ";
            cin >> take_put;
            if (take_put == 1){
                inventory->coat = true;
                stats->defence += 3;
            }
            break;
        case 3:
         if (inventory->torn_notebook == true) {
                cout << "Do you want to put back the TORN NOTEBOOK?\n1.yes 2.no ";
                cin >> take_put;
                if (take_put == 1) {
                    inventory->torn_notebook = false;
                }
            }
            cout << "There's a old notebook on the table. Take the TORN NOTEBOOK?\n1.yes 2.no ";
            cin >> take_put;
            if (take_put == 1){
                inventory->torn_notebook = true;
                stats->strenght += 4;
            }
            break;
        case 4:
            if (inventory->red_key == true) {
                cout << "You can open the door to the next room with the RED KEY. Do you open the door?\n 1.yes 2.no ";
                cin >> interaction;
                if (interaction==1){ 
                    *room = 1;
                }
            } else {
                    cout << "The red door is locked.\n";
            }
            break;
    }
};

void second_room_interactions(items *inventory, skills *stats, bool *can_go_out, int *room, int *froggit, int *frisk) {
    int interaction = 0;
    int take_put = 0;
    float num;
    int input;
    while (inventory->key != true){
        cout << "You find yourself in another room. There's a FROGGIT infront of you. Battle triggered. Prepare to fight!" << endl;
        cout << "Your base HP is " << *frisk << ". The FROGGIT base HP is " << *froggit << endl;
        while (*froggit > 0){
            cout << endl << "Press 1 to attack: ";
            cin >> input;
            if (input == 1){
                num = rand() % 5 + stats->strenght; 
                cout << endl << "Your attack strenght: " << num << endl;
                *froggit -= num;
            }
            if (*frisk >= 0){
                num = rand() % 5 + 3;
                cout << "FROGGIT attack strenght: " << num - stats->defence << endl;
                *frisk -= num - stats->defence;
                if (*frisk <= 0){
                    cout << "Your final HP is " << *frisk << ". The FROGGIT final HP is " << *froggit << endl;
                    cout << "You died! Game over! Stay determined, and try again!";
                    exit(0);
                }
            }
            cout << "Your current HP is " << *frisk << ". The FROGGIT current HP is " << *froggit << endl;
        }
        cout << "You defeated FROGGIT! You got the KEY. " << endl;
        inventory->key = true;
        break;
    }
    bool loop_break =  false;
    while (inventory->key == true && loop_break == false) {
        if (loop_break == true){
            break;
        }
        cout << "You're standing in a room with two doors. A red one, and a simple, wooden one. Go to:\n1.red door 2.wooden door ";
        cin >> interaction;
        switch (interaction) {
            case 1:
                *room = 0;
                return;
            case 2:{
                if (inventory->key == true) {
                    cout << "You can open the last door with the KEY. Do you open the door?\n 1.yes 2.no ";
                    cin >> interaction;
                    if (interaction==1){ 
                        cout << "TEXTALE\nThank you for playing! Inspiered by Undertale" << endl;
                        exit(0);
                    }
                    break;
                } else {
                    cout << "you somehow skipped the battle" << endl;
                }
            }
        }
    }
};

int main() {
    srand(time(NULL));
    items inventory;
    init_inventory(&inventory);
    skills stats;
    init_stats(&stats);

    bool can_go_out = false;
    int room = 0;
    int interaction = 0;
    int take_put = 0;
    int froggit = 30;
    int frisk = 20;
    while (true){
        cout << "start again: " << room << endl;
        while (room == 0) {
            first_room_interactions(&inventory, &stats, &can_go_out, &room);
        }
        while (room == 1) {
            second_room_interactions(&inventory, &stats, &can_go_out, &room, &froggit, &frisk);
        }
    }
}
