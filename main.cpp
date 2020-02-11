/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
#include <iostream>
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1) mechanical trumpet UDT and Valves class
 */
// random number of variables
// nested/embedded user defined class
// private data members and member function
// public data members and member function
struct MechanicalTrumpet
 {
    // remove and replace class Valves with struct Valves
    struct Valves
    {
        // valve access is private
        // 1 = valve up, 2 = valve halfway, 3 = valve down
        int valve1 = 1;
        int valve2 = 1;
	      int valve3 = 1;

        void moveValve1(int v1)
        {
			      std::cout << "entering private moveValve1 method" << std::endl;
			      valve1 = v1;
            std::cout << "valve1 =" << valve1 << std::endl;
			      std::cout << "leaving private moveValve1 method" << std::endl;
        }  
	      void moveValve2(int v2)
        {
            std::cout << "entering private moveValve2 method" << std::endl;
			      valve2 = v2;
            std::cout << "valve2 =" << valve2 << std::endl;
			      std::cout << "leaving private moveValve1 method" << std::endl;               
        } 
        void moveValve3(int v3)
        {
            std::cout << "entering private moveValve3 method" << std::endl;
			      valve3 = v3;
            std::cout << "valve3 =" << valve3 << std::endl;
			      std::cout << "leaving private moveValve3 method" << std::endl;               
        }
        void setValvePositions(int v1, int v2, int v3)
        {
            std::cout << "entering public setValvePositions (class valves)..." << std::endl; 
			      moveValve1(v1);
            moveValve2(v2);
            moveValve3(v3);
			      std::cout << "returning from setValvePositions..." << std::endl;
        }
        
    };  // end struct Valves
    
    // continue struct mechanicalTrumpet variables and member functions  
    // public function access to remaining parts of note 
    
    // slot numbers will position the embechure 
    int slot = 2; 
    // note length in 16th notes (quarter note = 4)
	  int noteLength = 4;
	  // tempo as bpm, min = 60, max = 200
	  int tempoBPM = 100; 

    void setNote(int s, int l, int t)
        {
            slot = s;
            noteLength = l;
            tempoBPM = t;
        } 
      
    // set slot position
	  // slots are 1 = C3, 2 = G3, 3 = C4, 4 = E4, 5 = G4 6 = C5, 7 = E5, 8 = G5
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
	
	  // knob #1 sets quarternote offset
	  // knob #2 sets sixteenth note offset
	  // knob #3 sets pulses offset
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

}; // end Struct SyncShift

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
// secondary structure #2
struct SlotV2
{
    int slotNum = 0;
};  // end Struct Slot

/* 
 5) TimeV2 UDT (embedded structure)
*/
// secondary structure #3
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
	  void closeDoors() { std::cout << "closing elevator doors" << std::endl; }
	  void openDoors()  { std::cout << "opening elevator doors" << std::endl; }
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
};
/* 
 10) ElevatorSystem UDT (embeds other structures)
*/
struct ElevatorSystem
{
	ElevatorCar car1;        // embedded structure
	ElevatorCar car2;        // embedded structure
	ElevatorCar car3;        // embedded structure
	ElevatorCar car4;        // embedded structure    
};	


/*
 5)
 */





/*
 6)
 */

/*
 7)
 */

/*
 8)
 */

/*
 9)
 */

/*
 10)
 */

#include <iostream>
int main()
{
    
    // instantiate a class=valves inside struct=mechanicalTtrumpet
    std::cout << std::endl << "exercise struct #1" << std::endl;
    MechanicalTrumpet::Valves v;
    // call public setValvePositions to access to private valve members     
    v.setValvePositions( 3, 0, 3 );  
   std::cout << "struct #1 done " << std::endl ;
    
     
    // instantiate a syncShift device
    std::cout << std::endl << "exercise struct #2" << std::endl;
    SyncShift s;
    // assign new knob values (defaults are all zero)
    std::cout << "new knob1 value = " << s.setKnob1(4) << std::endl;
    std::cout << "new knob2 value = " << s.setKnob2(7) << std::endl;
    std::cout << "new knob3 value = " << s.setKnob3(6) << std::endl;
    std::cout << "new knob4 value = " << s.setKnob4(11.8) << std::endl;
    std::cout << "struct #2 done " << std::endl ;

    
    // stuctures within structures
    std::cout << std::endl << "exercise structs 3 through 6 " << std::endl;
    MechanicalTrumpetV2 trpt;     // instantiate a mechanical trumpet
    // play a D2 for four beats at bpm = 90
    trpt.valves.valve1 = 3;       // 1st valve down 
    trpt.valves.valve2 = 0;       // 2nd valve up 
    trpt.valves.valve3 = 3;       // 3rd valve down
    trpt.slot.slotNum = 2;        // slot 2
    trpt.time.noteLength = 16;    // 16th x 16 
    trpt.time.tempo = 90;         // bpm
    std::cout << "structs 3 through 6 done " << std::endl ;  


    std::cout << std::endl << "exercise structs 7 through 10 " << std::endl;
    // get an elevator system
    ElevatorSystem e;
    // if car #1 dorss are open, then close them
    if ( e.car1.doors.doorsOpen ) e.car1.doors.closeDoors(); 
    std::cout << "structs 7 through 10 done " << std::endl ;


    std::cout << "good to go!" << std::endl;
}
