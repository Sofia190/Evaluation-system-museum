#include <iostream>
#include <string>
#include<vector>
#include <tuple>
#include <typeinfo>
#include <iterator>


using namespace std;

#define newline "\n"



template <class T1, class T2, class T3>
class cmultiple {

    public:

    vector<tuple<T1,T2,T3>> container;

    void add_items(cmultiple *cobj, tuple<T1,T2,T3> value) {

    cobj->container.push_back(value);}

    vector<tuple<T1,T2,T3>> util_items_function(cmultiple * cobj) {

    return cobj->container;} 

    };






class Exhibit {


//attributes

public:

string name;

int name_int;


int birth;

string birth_str;


float height;

string height_str;


int weight;

string weight_str;


string colour;

int colour_int;


string food;

int food_int;



vector<string> attributes;

vector<Exhibit*> ex_objs;


float score;

float score_c1;

float score_c2;

float score_c3;

float score_c4;


 cmultiple<int,string,string> c1;

 cmultiple<int,string,int> c2;

 cmultiple<int,string,float> c3;

 cmultiple<int,string,bool> c4;


int count_c1=0;

int count_c2=0;

int count_c3=0;

int count_c4=0;


int count_items = 0;






//methods


public:

void printIntro();

void display_rules();

void util_attr_function();



//use header file for template


template<class T> 

T createAttribute_name(Exhibit * u, T attr);

template<class T> 

T createAttribute_birth(Exhibit * u, T attr);

template<class T> 

T createAttribute_height(Exhibit * u, T attr);

template<class T> 

T createAttribute_weight(Exhibit * u, T attr);


template<class T> 

T createAttribute_colour(Exhibit * u, T attr);


template<class T> 

T createAttribute_food(Exhibit * u, T attr); 


template<class T1, class T2> 

void addAttribute(T1 * u, T2 attr);


vector<string> util_v_function(Exhibit * u);

void display_v_str_items(vector<string> v);


void util_vitems_function (Exhibit * u, Exhibit * u1);


vector<Exhibit*> util_ex_objs_function (Exhibit * u);



template <class T>

void display_items(vector<T*> v);



template <class T>

void add_to_string(vector<T*> v, T * u);

template <class T>

void add_to_int(vector<T*> v, T * u);

template <class T>

void add_to_float(vector<T*> v, T * u);


template <class T>

float find_score(T * u);


template<class T>

vector<tuple<int,string, string>> util_c1_str_function(T * u); 

template <class T>

vector<tuple<int,string, int>> util_c2_int_function(T * u);

template <class T>

vector<tuple<int,string, float>> util_c3_float_function(T * u);


template <class T>

vector<tuple<int,string,bool>> util_c4_bool_function(T * u);



void display_c1_str_items(vector<tuple<int,string,string>> v);

void display_c2_int_items(vector<tuple<int, string, int>> v);

void display_c3_float_items(vector<tuple<int,string, float>> v);

void display_c4_bool_items(vector<tuple<int,string,bool>> v);



template <class T>

float find_avg_height(vector<T*> v, T * obj);


template <class T>

float find_avg_weight(vector<T*> v, T * obj);



template <class T>

float util_height_function(vector<T*> f);
 
 
template <class T>

int util_weight_function(vector<T*> f);



template <class T>

float find_avg_score(vector<T*> v, T * obj);



template <class T>

int util_score_function(vector<T*> f, string * str);



template <class T>

int find_count_items(vector<T*> v);

 



void printSummary(string str, int value);



};





template<class T1, class T2> 

void Exhibit::addAttribute(T1 * u, T2 attr){

    u->attributes.push_back(attr); 
  
}



template<class T> 

T Exhibit::createAttribute_name(Exhibit * u,  T attr){

	u->name = attr;

	return u->name; }




template<class T> 

T Exhibit::createAttribute_birth(Exhibit * u,  T attr){


        u->birth = attr;

        return u->birth; }




template<class T> 

T Exhibit::createAttribute_height(Exhibit * u,  T attr){


        u->height =attr;

        return u->height; }




template<class T> 

T Exhibit::createAttribute_weight(Exhibit * u,  T attr){


        u->weight =attr;

        return u->weight; }




template<class T> 

T Exhibit::createAttribute_colour(Exhibit * u,  T attr){


        u->colour =attr;

        return u->colour; }




template<class T> 

T Exhibit::createAttribute_food(Exhibit * u,  T attr){


        u->food =attr;

        return u->food; }






template <class T>

void Exhibit::display_items(vector<T*> v) {

        for (auto& i: v ) {cout << i->name <<newline;}

}




template <class T>

void Exhibit::add_to_string(vector<T*> v, T * u) {

         u->score_c1 = 0;

         
 
         
         for (auto& i: v) {if (typeid(i->name).name() == typeid("str").name())
                       
                           cout << "";          //char here

                            //comment here

                            u->count_c1++;
                          
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1,"Name:", i->name)); 

                            u->score_c1++;


           
      
                          
                          if (typeid(i->birth_str).name() == typeid("str").name())
                       
                           cout << "";

                          (u->c1).add_items(&u->c1, make_tuple(u->count_c1,"BirthStr:", i->birth_str)); 

                                                       
                           if ((i->birth_str!="unknown") && (i->birth_str !="false")){

                           u->score_c1++; }    




                           if (typeid(i->height_str).name() == typeid("str").name())

                           cout <<"";
 
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1, "HeightStr:", i->height_str));




                           if (typeid(i->weight_str).name() == typeid("str").name())
                           
                           cout <<"";  
                       
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1, "WeightStr:",i->weight_str)); 

                           
                            if (i->weight_str!="unknown"&& (i->weight_str !="false")){

                           u->score_c1++;}    


                           
                           if (typeid(i->colour).name() == typeid("str").name())
                           
                           cout <<"";  
                       
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1, "Colour:" , i->colour)); 

                            if (i->colour!="unknown"){

                           u->score_c1++; }  




                           if (typeid(i->food).name() == typeid("str").name())
                           
                           cout <<"";  
                       
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1, "Food:", i->food)); 

                            if (i->food!="unknown"){

                           u->score_c1++; }  

                          


} 

                           u->score += u->score_c1;

                           cout << "Score c1: " << u->score_c1 << newline;


                           //(u->c1).container.push_back(i->name);  } 

                            //(u->c1).container.push_back(i->birth_str);  }

                            //(u->c1).container.push_back(i->height_str);  }

                            //(u->c1).container.push_back(i->weight_str);  }

                            //(u->c1).container.push_back(i->colour);  }

                            //(u->c1).container.push_back(i->food);  }


                           
}



template <class T>

void Exhibit::add_to_int(vector<T*> v, T * u) {

         u->score_c2 = 0;

         


         for (auto& i: v) {
                            if (typeid(i->name_int).name() == typeid(1).name())

                           u->count_c2++;
                       
                           cout << "" ;   //char here
 
                           (u->c2).add_items(&u->c2, make_tuple(u->count_c2, "**NameInt**:", i->name_int));


                           
                           if (typeid(i->birth).name() == typeid(1).name())
                       
                           cout << "";   
 
                           (u->c2).add_items(&u->c2, make_tuple(u->count_c2, "Birth:", i->birth)); 

                           if (i->birth > 0){

                           u->score_c2++; }  



                           if (typeid(i->weight).name() == typeid(1).name())
                       
                           cout << "";     

                           (u->c2).add_items(&u->c2, make_tuple(u->count_c2, "Weight:", i->weight)); 

                           if (i->weight > 0){

                           u->score_c2++; } 



                           
                           if ( typeid(i->colour_int).name() == typeid(1).name())
                           
                           cout <<"";  
                       
                           (u->c2).add_items(&u->c2, make_tuple(u->count_c2, "ColourInt:", i->colour_int)); 

         

                          
                           if ( typeid(i->food_int).name() == typeid(1).name())
                           
                           cout <<"";  
                       
                           (u->c2).add_items(&u->c2, make_tuple(u->count_c2, "FoodInt:" ,i->food_int)); 

                         


}

                           u->score += u->score_c2;

                           cout << "Score c2:  " << u->score_c2 << newline;

                           //(u->c2).container.push_back(i->babies);  } 
                         
                           //(u->c2).container.push_back(i->tones_of_food_per_year);  } 
                         

                         
}



template <class T>

void Exhibit::add_to_float(vector<T*> v, T * u) {

         u->score_c3 = 0;

         u->score = 0;


         for (auto& i: v) {if (typeid(i->height).name() == typeid(float).name())

                           u->count_c3++;
                       
                           cout << "";    //char here
 
                           (u->c3).add_items(&u->c3, make_tuple(u->count_c3, "Height:", i->height));

                            if (i->height > 0.0){

                            u->score_c3++; } 


 }
                           u->score = score_c1 + score_c2 + score_c3;

                           cout << "Score c3: " << u->score_c3 << newline;

                           cout << "Score: " << u->score << newline << newline;

                           //(u->c3).container.push_back(i->height);  } 
          
                         
}




template <class T>

float Exhibit::find_score(T * u)  {

  
   return u->score;


}




template <class T>

vector<tuple<int,string,string>> Exhibit::util_c1_str_function(T * u) {


       return (u->c1).util_items_function(&u->c1);    

       //return (u->c1).container;

}



template <class T>

vector<tuple<int,string,int>> Exhibit::util_c2_int_function(T * u) {


       return (u->c2).util_items_function(&u->c2);    

       //return (u->c2).container;

}



template <class T>

vector<tuple<int,string,float>> Exhibit::util_c3_float_function(T * u) {


       return (u->c3).util_items_function(&u->c3);    

       //return (u->c3).container;

}



template <class T>


vector<tuple<int,string,bool>> Exhibit::util_c4_bool_function(T * u) {


       return (u->c4).util_items_function(&u->c4);    

       //return (u->c4).container;

} 






template <class T>

float Exhibit::find_avg_height(vector<T*> v, T * obj) {

 float count_height = 0;

 float avg_height;

 for (int i=0; i<v.size(); i++) {

   obj->count_items++;

   count_height += v[i]->height;



 }


 avg_height = count_height / obj->count_items;


return avg_height;

}






template <class T>

float Exhibit::find_avg_weight(vector<T*> v, T * obj) {

 float count_weight = 0;

 float avg_weight;

 for (int i=0; i<v.size(); i++) {

   count_weight += v[i]->weight;



 }


 avg_weight = count_weight / obj->count_items;


return avg_weight;

}






template <class T>

float Exhibit::util_height_function(vector<T*> f){
    
    int max=0;

    string name;

     


  for (typename vector<T*>::iterator it = f.begin(); it != f.end(); it++) {

    
    if ((*it)->height > max) {
        
       max = (*it)->height;
        
       }

    
       
     if (max == (*it)->height) {  
       
        name = (*it)->name;
       
       
     }}

    cout << "This program finds the maximum height " << newline << newline;
    
    cout << name << newline ; 



  
    return max; }






template <class T>

int Exhibit::util_weight_function(vector<T*> f){
    
    int max=0;

    string name;

     


  for (typename vector<T*>::iterator it = f.begin(); it != f.end(); it++) {

    
    if ((*it)->weight > max) {
        
       max = (*it)->weight;
        
       }

    
       
     if (max == (*it)->weight) {  
       
        name = (*it)->name;
       
       
     }}

    
    cout << "This program finds the maximum weight" << newline << newline;

    cout << name << newline ; 



  
    return max; }







template <class T>

float Exhibit::find_avg_score(vector<T*> v, T * obj) {

 float count_score = 0;

 float avg_score;

 for (int i=0; i<v.size(); i++) {

   count_score += v[i]->score;


 }


 avg_score = count_score / obj->count_items;


 return avg_score;

}





template <class T>

int Exhibit::util_score_function(vector<T*> f, string * str){
    
    int max=0;

    string name;

     


  for (typename vector<T*>::iterator it = f.begin(); it != f.end(); it++) {

    
    if ((*it)->score > max) {
        
       max = (*it)->score;
        
       }

    
       
     if (max == (*it)->score) {  
       
        name = (*it)->name;
       
       
     }}

    
    cout << "This program finds the class with maximum score " << newline;

    cout << "The name represents the class. " << newline << newline;

    cout << name << newline ; 


    *str = name;



  
    return max; }






template <class T>

int Exhibit::find_count_items(vector<T*> v) {

     cout << "Count: " << newline;  

     return v.size();

}





class Ex_A : public Exhibit

{

public:

string tail;

string claws;

string communication;

string sociable;

int babies;

float tones_of_food_per_year;


vector<Ex_A*> exa_objs;


int count_c1_exa=0;

int count_c2_exa=0;

int count_c3_exa=0;





void util_vitems_function_exa (Ex_A * u, Ex_A * u1);

vector<Ex_A*> util_ex_objs_function_exa (Ex_A * u);


template <class T>

void add_to_string_exa(vector<T*> v, T * u);

template <class T>

void add_to_int_exa(vector<T*> v, T * u);

template <class T>

void add_to_float_exa(vector<T*> v, T * u);



};






template <class T>

void Ex_A::add_to_string_exa(vector<T*> v, T * u) {

  
         for (auto& i: v) {if (typeid(i->tail).name() == typeid("str").name())
                       
                           cout << "";          //char here

                            //comment here

                            u->count_c1_exa++;
                          
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exa,"+Tail+:", i->tail)); 

                            u->score_c1++;

           
      
                          
                          if (typeid(i->claws).name() == typeid("str").name())
                       
                           cout << "";

                          (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exa,"+Claws+:", i->claws)); 

                                                       
                           if (i->claws!="unknown"){

                           u->score_c1++; }    




                           if (typeid(i->communication).name() == typeid("str").name())

                           cout <<"";
 
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exa, "+Communication+:", i->communication));

                                                    
                           if (i->communication!="unknown"){

                           u->score_c1++; }    



                         
                           if (typeid(i->sociable).name() == typeid("str").name())

                           cout <<"";
 
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exa, "+Sociable+:", i->sociable));

                                                    
                           if (i->sociable!="unknown"){

                           u->score_c1++; }  


                          


} 

                           u->score += u->score_c1;

                           cout << "Score c1: " << u->score_c1 << newline;


                           //(u->c1).container.push_back(i->tail);  } 

                            //(u->c1).container.push_back(i->claws);  }

                            //(u->c1).container.push_back(i->communication);  }

                            //(u->c1).container.push_back(i->sociable);  }




}





template <class T>

void Ex_A::add_to_int_exa(vector<T*> v, T * u) {



         for (auto& i: v) {
                            if (typeid(i->babies).name() == typeid(1).name())

                           u->count_c2_exa++;
                       
                           cout << "" ;   //char here
 
                           (u->c2).add_items(&u->c2, make_tuple(u->count_c2_exa, "+Babies+:", i->babies));

                                                      
                           if (i->babies > 3){

                           u->score_c1++; }  


                     

}

                           u->score += u->score_c2;
                            
                           cout << "Score c2:  " << u->score_c2 << newline;

                           //(u->c2).container.push_back(i->babies);  } 
                         
                           //(u->c2).container.push_back(i->tones_of_food_per_year);  } 
           
                         


}




template <class T>

void Ex_A::add_to_float_exa(vector<T*> v, T * u) {


         u->score = 0;


         for (auto& i: v) { 
                           
                           if (typeid(i->tones_of_food_per_year).name() == typeid(float).name())
                      
                           u->count_c3_exa++;
                       
                           cout << "";   
 
                           (u->c3).add_items(&u->c3, make_tuple(u->count_c3_exa, "+Tones of food per year+:", i->tones_of_food_per_year)); 

                           if (i->tones_of_food_per_year > 100){

                           u->score_c3++; }  




 }
                           u->score = score_c1 + score_c2 + score_c3;

                           cout << "Score c3: " << u->score_c3 << newline;

                           cout << "Score: " << u->score << newline << newline;

                          //(u->c3).container.push_back(i->tones_of_food_per_year);  } 
          
                         
}






class Ex_B :  public Ex_A

{


public: 

//string tail;

//string claws;

//string communication;

//string sociable;

//int babies;

//int tones_of_food_per_year;

bool weird_habits;

bool night_hunter;

vector<Ex_B*> exb_objs;

int count_c1_exb = 0;

int count_c2_exb = 0;

int count_c3_exb = 0;

int count_c4_exb = 0;






void util_vitems_function_exb (Ex_B * u, Ex_B * u1);

vector<Ex_B*> util_ex_objs_function_exb (Ex_B * u);


template <class T>

void add_to_string_exb(vector<T*> v, T * u);

template <class T>

void add_to_int_exb(vector<T*> v, T * u);

template <class T>

void add_to_float_exb(vector<T*> v, T * u);

template <class T>

void add_to_bool_exb(vector<T*> v, T * u);



};




template <class T>

void Ex_B::add_to_string_exb(vector<T*> v, T * u) {

  
         for (auto& i: v) {if (typeid(i->tail).name() == typeid("str").name())
                       
                           cout << "";          //char here

                            //comment here

                            u->count_c1_exb++;
                          
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exb,"+Tail+:", i->tail)); 

                            u->score_c1++;

           
      
                          
                          if (typeid(i->claws).name() == typeid("str").name())
                       
                           cout << "";

                          (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exb,"+Claws+:", i->claws)); 

                                                       
                           if (i->claws!="unknown"){

                           u->score_c1++; }    




                           if (typeid(i->communication).name() == typeid("str").name())

                           cout <<"";
 
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exb, "+Communication+:", i->communication));

                                                    
                           if (i->communication!="unknown"){

                           u->score_c1++; }    



                         
                           if (typeid(i->sociable).name() == typeid("str").name())

                           cout <<"";
 
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exb, "+Sociable+:", i->sociable));

                                                    
                           if (i->sociable!="unknown"){

                           u->score_c1++; }  


                          


} 

                           u->score += u->score_c1;

                           cout << "Score c1: " << u->score_c1 << newline;


                           //(u->c1).container.push_back(i->tail);  } 

                            //(u->c1).container.push_back(i->claws);  }

                            //(u->c1).container.push_back(i->communication);  }

                            //(u->c1).container.push_back(i->sociable);  }




}





template <class T>

void Ex_B::add_to_int_exb(vector<T*> v, T * u) {



         for (auto& i: v) {
                            if (typeid(i->babies).name() == typeid(1).name())

                           u->count_c2_exb++;
                       
                           cout << "" ;   //char here
 
                           (u->c2).add_items(&u->c2, make_tuple(u->count_c2_exb, "+Babies+:", i->babies));

                                                      
                           if (i->babies > 3){

                           u->score_c2++; }  


                     

}

                           u->score += u->score_c2;
                            
                           cout << "Score c2:  " << u->score_c2 << newline;

                           //(u->c2).container.push_back(i->babies);  } 
                         
                           //(u->c2).container.push_back(i->tones_of_food_per_year);  } 
           
                         


}




template <class T>

void Ex_B::add_to_float_exb(vector<T*> v, T * u) {


         for (auto& i: v) { 
                           
                           if (typeid(i->tones_of_food_per_year).name() == typeid(float).name())
                      
                           u->count_c3_exb++;
                       
                           cout << "";   
 
                           (u->c3).add_items(&u->c3, make_tuple(u->count_c3_exb, "+Tones of food per year+:", i->tones_of_food_per_year)); 

                           if (i->tones_of_food_per_year > 100){

                           u->score_c3++; }  




 }
                           u->score += u->score_c3;

                           cout << "Score c3: " << u->score_c3 << newline;

                          //(u->c3).container.push_back(i->tones_of_food_per_year);  } 
          
                         
}





template <class T>

void Ex_B::add_to_bool_exb(vector<T*> v, T * u) {

         u->score_c4 = 0;


         for (auto& i: v) {if (typeid(i->weird_habits).name() == typeid(true).name())
                       
                           cout << "";     //char here

                           //comment here

                           u->count_c4_exb++;
 
                           (u->c4).add_items(&u->c4, make_tuple(u->count_c4_exb, "+Weird_habits+:", i->weird_habits)); 

                            
                           if (i->weird_habits == true){

                           u->score_c4++; }  




                           if (typeid(i->night_hunter).name() == typeid(true).name())
                       
                           cout << newline;     //newline here
 
                           (u->c4).add_items(&u->c4, make_tuple(u->count_c4_exb, "+Night_hunter+:", i->night_hunter)); 

                            
                           if (i->night_hunter == true){

                           u->score_c4++; }


}

                            u->score = u->score_c1 + u->score_c2 + u->score_c3 + u->score_c4;

                           cout << "Score c4: " << u->score_c4 << newline;

                           cout << "Score: " << u->score << newline << newline;

                           //(u->c4).container.push_back(i->weird_habits);  } 
          
                           //(u->c4).container.push_back(i->night_hunter);  } 
}






class Ex_C :  public Ex_A

{


public:

//string tail;

//string claws;

//string communication;

//string sociable;

//int babies;

//int tones_of_food_per_year;

bool weird_habits;

bool active;

bool create_own_home;

bool aggressive;

float age_of_independency;


vector<Ex_C*> exc_objs;


int count_c1_exc = 0;

int count_c2_exc = 0;

int count_c3_exc = 0;

int count_c4_exc = 0;



void util_vitems_function_exc (Ex_C * u, Ex_C * u1);

vector<Ex_C*> util_ex_objs_function_exc(Ex_C * u);



template <class T>

void add_to_string_exc(vector<T*> v, T * u);

template <class T>

void add_to_int_exc(vector<T*> v, T * u);

template <class T>

void add_to_float_exc(vector<T*> v, T * u);

template <class T>

void add_to_bool_exc(vector<T*> v, T * u);



};





template <class T>

void Ex_C::add_to_string_exc(vector<T*> v, T * u) {

  
         for (auto& i: v) {if (typeid(i->tail).name() == typeid("str").name())
                       
                           cout << "";          //char here

                            //comment here

                            u->count_c1_exc++;
                          
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exc,"+Tail+:", i->tail)); 

                            u->score_c1++;

           
      
                          
                          if (typeid(i->claws).name() == typeid("str").name())
                       
                           cout << "";

                          (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exc,"+Claws+:", i->claws)); 

                                                       
                           if (i->claws!="unknown"){

                           u->score_c1++; }    




                           if (typeid(i->communication).name() == typeid("str").name())

                           cout <<"";
 
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exc, "+Communication+:", i->communication));

                                                    
                           if (i->communication!="unknown"){

                           u->score_c1++; }    



                         
                           if (typeid(i->sociable).name() == typeid("str").name())

                           cout <<"";
 
                           (u->c1).add_items(&u->c1, make_tuple(u->count_c1_exc, "+Sociable+:", i->sociable));

                                                    
                           if (i->sociable!="unknown"){

                           u->score_c1++; }  


                          


} 

                           u->score += u->score_c1;

                           cout << "Score c1: " << u->score_c1 << newline;


                           //(u->c1).container.push_back(i->tail);  } 

                            //(u->c1).container.push_back(i->claws);  }

                            //(u->c1).container.push_back(i->communication);  }

                            //(u->c1).container.push_back(i->sociable);  }




}





template <class T>

void Ex_C::add_to_int_exc(vector<T*> v, T * u) {



         for (auto& i: v) {
                            if (typeid(i->babies).name() == typeid(1).name())

                           u->count_c2_exc++;
                       
                           cout << "" ;   //char here
 
                           (u->c2).add_items(&u->c2, make_tuple(u->count_c2_exc, "+Babies+:", i->babies));

                                                      
                           if (i->babies > 3){

                           u->score_c2++; }  


                     

}

                           u->score += u->score_c2;
                            
                           cout << "Score c2:  " << u->score_c2 << newline;

                           //(u->c2).container.push_back(i->babies);  } 
                         
                           //(u->c2).container.push_back(i->tones_of_food_per_year);  } 
           
                         


}




template <class T>

void Ex_C::add_to_float_exc(vector<T*> v, T * u) {



         for (auto& i: v) { 
                           
                           if (typeid(i->tones_of_food_per_year).name() == typeid(float).name())
                      
                           u->count_c3_exc++;
                       
                           cout << "";   
 
                           (u->c3).add_items(&u->c3, make_tuple(u->count_c3_exc, "+Tones of food per year+:", i->tones_of_food_per_year)); 

                           if (i->tones_of_food_per_year > 100){

                           u->score_c3++;}



                           if (typeid(i->age_of_independency).name() == typeid(float).name())
                      
                           //u->count_c3_exc++;
                       
                           cout << "";   
 
                           (u->c3).add_items(&u->c3, make_tuple(u->count_c3_exc, "+Age of independency+:", i->age_of_independency)); 

                           if (i->age_of_independency < 3){

                           u->score_c3++;}  




 }
                           u->score += u->score_c3;

                           cout << "Score c3: " << u->score_c3 << newline;

                          //(u->c3).container.push_back(i->tones_of_food_per_year);  } 
          
                         
}






template <class T>

void Ex_C::add_to_bool_exc(vector<T*> v, T * u) {

          u->score_c4 = 0;


         for (auto& i: v) {if (typeid(i->weird_habits).name() == typeid(true).name())
                       
                           cout << "";     //char here

                           //comment here

                           u->count_c4_exc++;
 
                           (u->c4).add_items(&u->c4, make_tuple(u->count_c4_exc, "Weird habits:", i->weird_habits)); 

                            
                           if (i->weird_habits == true){

                           u->score_c4++; }  




                           if (typeid(i->active).name() == typeid(true).name())
                       
                           cout << "";     
 
                           (u->c4).add_items(&u->c4, make_tuple(u->count_c4_exc, "Active:", i->active)); 

                            
                           if (i->active == true){

                           u->score_c4++; }


                      
                           if (typeid(i->create_own_home).name() == typeid(true).name())
                       
                           cout << "";    
 
                           (u->c4).add_items(&u->c4, make_tuple(u->count_c4_exc, "Create own home:", i->active)); 

                            
                           if (i->create_own_home == true){

                           u->score_c4++;}


                          
                           if (typeid(i->aggressive).name() == typeid(true).name())
                       
                           cout << "";     
 
                           (u->c4).add_items(&u->c4, make_tuple(u->count_c4_exc, "Agressive:", i->aggressive)); 

                            
                           if (i->aggressive == false){

                           u->score_c4++; }


}

                         
                           
                           u->score = u->score_c1 + u->score_c2 + u->score_c3 + u->score_c4;

                           cout << "Score c4: " << u->score_c4 << newline;

                           cout << "Score: " << u->score << newline << newline;


                           //(u->c4).container.push_back(i->weird_habits);  } 

                           //(u->c4).container.push_back(i->active);  } 

                           //(u->c4).container.push_back(i->create_own_home);  } 

                            //(u->c4).container.push_back(i->agressive);  }
          
                         
}




