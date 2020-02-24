 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */
struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;

    void run( int howFast, bool startWithLeftFoot );
};


struct Foot
{
    // Foot variables
    int numToes = 10;
    int stepFeet = 2;
    // declare Foot member functions
    int stepSize();
    int stepForward();
       
};
// implement Foot member functions
int Foot::stepForward()
{
    return stepSize();
}
int Foot::stepSize()
{
    return Foot::stepFeet;
}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


/*
1) mechanical trumpet UDT and Valves class
*/
// random number of variables
// nested/embedded user defined class
// data members and member function
struct MechanicalTrumpet
{
    struct Valves
    {
        int valve1 = 1;
        int valve2 = 1;
        int valve3 = 1;

        void moveValve1(int v1);
        void moveValve2(int v2);        
        void moveValve3(int v3);
        void setValvePositions(int v1, int v2, int v3);
        

    };  
   
    int slot = 2; 
    int noteLength = 4;
    int tempoBPM = 100; 

    // set note variables
    void setNote(int s, int l, int t);
     
    // set slot number  
    void setSlot( int slot );

    // set note length
    void setNoteLength( int noteLength );

    // set tempo
    void setTempo( int tempoBPM); 

    // play note with current valve and slot positions 
    void playNote(int slot, int noteLength, int tempoBPM );
    

}; // end struct MechanicalTrumpet

// implement MechanicalTrumpet::Valves::moveValve1
void MechanicalTrumpet::Valves::moveValve1(int v1)
{
    Valves::valve1 = v1;
}
// implement MechanicalTrumpet::Valves::moveValve2
void MechanicalTrumpet::Valves::moveValve2(int v2)
{
    Valves::valve2 = v2;
}
// implement MechanicalTrumpet::Valves::moveValve3
void MechanicalTrumpet::Valves::moveValve3(int v3)
{
    Valves::valve3 = v3;
}
// implement MechanicalTrumpet::Valves::setValvePositions
void MechanicalTrumpet::Valves::setValvePositions(int v1, int v2, int v3)
{
    moveValve1(v1);
    moveValve2(v2);
    moveValve3(v3);
}
// implement MechanicalTrumpet::setNote
void MechanicalTrumpet::setNote(int s, int l, int t)
{
    slot = s;
    noteLength = l;
    tempoBPM = t;
} 

// implement MechanicalTrumpet::setSlot
void MechanicalTrumpet::setSlot( int s ) 
{
    slot = s;
}
// implement MechanicalTrumpet::setNoteLength
void MechanicalTrumpet::setNoteLength( int n ) 
{
    noteLength = n;
}
// implement MechanicalTrumpet::setTempo
void MechanicalTrumpet::setTempo( int t ) 
{
    tempoBPM = t;
}
// implement MechanicalTrumpet::playNote
void MechanicalTrumpet::playNote( int s, int n, int t )
{
    setSlot(s);
    setNoteLength(n);
    setTempo(t);
}
/* 
2) Innerclock syncShift UDT
*/ 
// public members and member functions return values 
struct SyncShift
{
    // modes are run=1, locked=2, bypass=3
    int mode = 0;
    int knob1 = 0; 
    int knob2 = 0;
    int knob3 = 0;
    // knob4 is shift offset
    double knob4 = 0;

    ///////////////////////////////////////////////////////////
    //
    // setknobs 1 - 3 function calls return new knob value   
    //
    ///////////////////////////////////////////////////////////

    int setKnob1(int k1);  
    int setKnob2(int k2);  
    int setKnob3(int k3);  

    ///////////////////////////////////////////////////////////
    //
    // setknob 4 function call return new knob value   
    //
    ///////////////////////////////////////////////////////////   

    double setKnob4(double k4);

};  // end Struct SyncShift

int SyncShift::setKnob1(int k1) { knob1 = k1; return knob1; } 
int SyncShift::setKnob2(int k2) { knob2 = k2; return knob2; }
int SyncShift::setKnob3(int k3) { knob1 = k3; return knob3; }
double SyncShift::setKnob4(double k4) { knob4 = k4; return knob4; }
/* 
3) mechanicalTrumpetV2 UDT (structures within a structure)
*/

    // secondary structure #1 
struct ValvesV2
{
    int valve1 = 0;
    int valve2 = 0;
    int valve3 = 0;
};  // end Struct Valves

/* 
4) SlotV2 UDT (embedded structure)
*/
struct SlotV2
{
    int slotNum = 0;
    int slotNumLast = 0;
};  // end Struct Slot

/* 
5) TimeV2 UDT (embedded structure)
*/
struct TimeV2
{
    int noteLength = 0;
    int tempo = 0;
};  // end Struct Time

/* 
6) MechanicalTrumpetV2 UDT (structures within structure)
*/
struct MechanicalTrumpetV2       
{
    ValvesV2 valves;
    SlotV2 slot;
    TimeV2 time;
};  // end struct MechanicalTrumpetV2	

/* 
7) ElevatorDoors UDT (structure embedded two levels)
*/

struct ElevatorDoors
{
    bool doorsOpen = 1;
    bool doorsClosed = 0;
    bool doorsLocked = 0;
    bool doorsUnlocked = 0;
};	

/* 
8) ElevatorFloor UDT (structure embedded two levels)
*/
struct ElevatorFloor
{
    int previousFloor = 0;
    int currentFloor = 0;
    int nextFloor = 0; 
};
/* 
9) ElevatorCar UDT (embedded structure has embedded structures)
*/
struct ElevatorCar
{ 
    ElevatorDoors& doors;    // elevator car has a doors structure 
    ElevatorFloor& floor;    // elevator car has a floor structure

    void closeDoors( ElevatorDoors& doors );
    void openDoors( ElevatorDoors& doors );
};
// implement ElevatorCar::closeDoors
void ElevatorCar::closeDoors(ElevatorDoors& d)
{
    d.doorsClosed = 1;
    d.doorsOpen = 0;
}
// implement ElevatorCar::openDoors
void ElevatorCar::openDoors(ElevatorDoors& d)
{
    d.doorsOpen = 1;
    d.doorsClosed = 0;
}
/* 
10) ElevatorSystem UDT (embeds other structures, no primitives)
*/
struct ElevatorSystem
{
    ElevatorCar car1;        // elevator system has four cars
    ElevatorCar car2;         
    ElevatorCar car3;         
    ElevatorCar car4;             

    // move down from current floor 
    void e1FloorDown ( ElevatorCar& car1 );
    void e2FloorDown ( ElevatorCar& car2 );
    void e3FloorDown ( ElevatorCar& car3 );
    void e4FloorDown ( ElevatorCar& car4 );
    
    // move up from current floor
    void e1FloorUp ( ElevatorCar& car1 );
    void e2FloorUp ( ElevatorCar& car2 );
    void e3FloorUp ( ElevatorCar& car3 );
    void e4FloorUp ( ElevatorCar& car4 );
};	

// implement ElevatorSystem::floorDown for each car
void ElevatorSystem::e1FloorDown ( ElevatorCar& c1 )
{
    c1.floor.previousFloor = c1.floor.currentFloor;
    c1.floor.nextFloor = c1.floor.currentFloor - 1;
    // insert code that moves car down
    c1.floor.currentFloor = c1.floor.nextFloor;   
}
void ElevatorSystem::e2FloorDown ( ElevatorCar& c2 )
{
    c2.floor.previousFloor = c2.floor.currentFloor;
    c2.floor.nextFloor = c2.floor.currentFloor - 1;
    // insert code that moves car down
    c2.floor.currentFloor = c2.floor.nextFloor;   
}
void ElevatorSystem::e3FloorDown ( ElevatorCar& c3 )
{
    c3.floor.previousFloor = c3.floor.currentFloor;
    c3.floor.nextFloor = c3.floor.currentFloor - 1;
    // insert code that moves car down
    c3.floor.currentFloor = c3.floor.nextFloor;   
}
void ElevatorSystem::e4FloorDown ( ElevatorCar& c4 )
{
    c4.floor.previousFloor = c4.floor.currentFloor;
    c4.floor.nextFloor = c4.floor.currentFloor - 1;
    // insert code that moves car down
    c4.floor.currentFloor = c4.floor.nextFloor;   
}
// implement ElevatorSystem::floorUp for each car
void ElevatorSystem::e1FloorUp ( ElevatorCar& c1 )
{
    c1.floor.previousFloor = c1.floor.currentFloor;
    c1.floor.nextFloor = c1.floor.currentFloor + 1;
    // insert code that moves car up
    c1.floor.currentFloor = c1.floor.nextFloor;   
}
void ElevatorSystem::e2FloorUp ( ElevatorCar& c2 )
{
    c2.floor.previousFloor = c2.floor.currentFloor;
    c2.floor.nextFloor = c2.floor.currentFloor + 1;
    // insert code that moves car up
    c2.floor.currentFloor = c2.floor.nextFloor;   
}
void ElevatorSystem::e3FloorUp ( ElevatorCar& c3 )
{
    c3.floor.previousFloor = c3.floor.currentFloor;
    c3.floor.nextFloor = c3.floor.currentFloor + 1;
    // insert code that moves car up
    c3.floor.currentFloor = c3.floor.nextFloor;   
}
void ElevatorSystem::e4FloorUp ( ElevatorCar& c4 )
{
    c4.floor.previousFloor = c4.floor.currentFloor;
    c4.floor.nextFloor = c4.floor.currentFloor + 1;
    // insert code that moves car up
    c4.floor.currentFloor = c4.floor.nextFloor;   
}
#include <iostream>
int main()
{




    std::cout << "good to go!" << std::endl;
}
