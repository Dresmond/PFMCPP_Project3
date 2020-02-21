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

        void moveValve1(int v1)
        {
            valve1 = v1;
        }  
        void moveValve2(int v2)
        {
            valve2 = v2;             
        } 
        void moveValve3(int v3)
        {
            valve3 = v3;             
        }
        void setValvePositions(int v1, int v2, int v3)
        {
            moveValve1(v1);
            moveValve2(v2);
            moveValve3(v3);
        }

    };  

    int slot = 2; 
    int noteLength = 4;
    int tempoBPM = 100; 

    void setNote(int s, int l, int t)
    {
        slot = s;
        noteLength = l;
        tempoBPM = t;
    } 
    // set slot number  
    void setSlot();

    // set note length
    void setNoteLength();

    // set tempo
    void setTempo(); 

    // play note with current valve and slot positions 
    void playNote();

}; // end struct MechanicalTrumpet

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

    int setKnob1(int k1) { knob1 = k1; return knob1; } 
    int setKnob2(int k2) { knob2 = k2; return knob2; } 
    int setKnob3(int k3) { knob1 = k3; return knob3; } 

    ///////////////////////////////////////////////////////////
    //
    // setknob 4 function call return new knob value   
    //
    ///////////////////////////////////////////////////////////   

    double setKnob4(double k4) { knob4 = k4; return knob4; }

};  // end Struct SyncShift

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
    ElevatorDoors doors;    // embedded structure 
    ElevatorFloor floor;    // embedded structure

    void closeDoors( ElevatorDoors doors );
    void openDoors( ElevatorDoors doors );
};

/* 
10) ElevatorSystem UDT (embeds other structures, no primitives)
*/
struct ElevatorSystem
{
    ElevatorCar car1;        // embedded structure
    ElevatorCar car2;        // embedded structure
    ElevatorCar car3;        // embedded structure
    ElevatorCar car4;        // embedded structure    


    // move down from current floor 
    void floorDown( int downTarget );
    // move up from current floor
    void floorUp( int upTarget ); 

};	




#include <iostream>
int main()
{




    std::cout << "good to go!" << std::endl;
}
