
#include "dc_1.hpp"



void Exhibit::printIntro() {

cout << "This program organises a contest between prehistoric exibits. " << newline; 

cout << "The score of each participant is calculated depending on" << newline;

cout << "the number of attributes that it possesses. The maximum score for an exibit" << newline;

cout << "is 50 points and each attribute may rewarded 0.5 points or more or may not be rewarded any points." << newline;

}




void Exhibit::display_rules() {


cout << "Some attributes are rewarded 0.5. For example, the attributes common to all classses of dinosaurs." << newline;

cout << "These attributes can gain a score of maximum 0.5, per attribute, only if the value is known." << newline << newline;

cout << "name='known'   birth='known'   height='known'    weight='known'    colour='known'    food='known'" << newline << newline;

cout << "Here are the attributes that can gain one point, if their value is known. If their value is not known, " << newline;

cout << "they gain a score of 0.75." << newline;

cout << "tail='tail'  claws='claws'    food='carnivorous'   create_own_home=true" << newline << newline;



cout << "Here are the attributes that can gain 1.5 points, if their value is known or it surpasses a certain ammount. " << newline;

cout << "If their value is not known or it doesn't surpasses a certain ammount they gain a score of one point." << newline;

cout << "communication='known'    sociable='known'   babies > 3    tones of food per year > 100" << newline << newline;




cout << "Here are the attributes that can gain 2 points, if their value is set to true of false or it surpassesses a certain value." << newline;
 
cout << "If their value is false it means it is either false or unknown." << newline;

cout << "night_hunter=true   weird_habits=true    active=true     aggressive=false    age_of_independency < 3" << newline << newline;


} 






//we can create multiple attributes for multiple data types, like attr_<data type> 

void Exhibit::util_attr_function() { 

     cout << newline << newline << "Attributes" << newline << newline;

     cout <<  "Naming conventions: " << newline;

     cout << "If a name is not known, use an integer from 1." << newline;

     cout << "Type integer means the name is not known." << newline;
     
     cout << "false means int type is not set" << newline << newline;

     cout << "                               ***                                 " << newline << newline;


     cout << "Birth can be specified as an int  or as a string" << newline;

     cout << "String can be mathematical notation or 'unknown' string" << newline;

     cout << "false means str type is not set" << newline << newline;

     cout << "                               ***                                 " << newline << newline;


     cout << "Height can be specified as an float or as a string" << newline;

     cout << "String can be 'unknown' string" << newline;

     cout << "false means str type is not set" << newline << newline;

     cout << "                               ***                                 " << newline << newline;



     cout << "Weight can be specified as an integer or as a string" << newline;

     cout << "Integer is expressed with unit of kilograms " << newline;

     cout << "String can be the value and unit of measurement or 'unknown' string" << newline;

     cout << "false means str type is not set" << newline << newline;

     cout << "                               ***                                 " << newline << newline;


      cout << "Colour can be specified as -1 or as a string" << newline;

      cout << "Negative integer means unknown " << newline;

      cout << "False means int type is not set " << newline;

      cout << "String can be the value or 'unknown' string" << newline << newline;

      cout << "                               ***                                 " << newline << newline;


      cout << "Food can be specified as 0 or as a string" << newline;

      cout << "Non value means unknown " << newline;

      cout << "true means non value is not set" << newline;

      cout << "String can be the value or 'unknown' string" << newline << newline;

      cout << "                               ***                                 " << newline << newline;

     
}






vector<string> Exhibit::util_v_function(Exhibit * u) {

    return  u->attributes;}





void Exhibit::display_v_str_items(vector<string> v) {

 for (auto& i: v ) {cout << i <<newline;}

}






void Exhibit::util_vitems_function (Exhibit * u, Exhibit * u1) {

        u->ex_objs.push_back(u1);

}






vector<Exhibit*> Exhibit::util_ex_objs_function (Exhibit * u) {

     return u->ex_objs;}






void Ex_A::util_vitems_function_exa (Ex_A * u, Ex_A * u1) {

        u->exa_objs.push_back(u1);

}






vector<Ex_A*> Ex_A::util_ex_objs_function_exa (Ex_A * u) {

     return u->exa_objs;}






void Ex_B::util_vitems_function_exb (Ex_B * u, Ex_B * u1) {

        u->exb_objs.push_back(u1);

}






vector<Ex_B*> Ex_B::util_ex_objs_function_exb (Ex_B * u) {

     return u->exb_objs;}






void Ex_C::util_vitems_function_exc (Ex_C * u, Ex_C * u1) {

        u->exc_objs.push_back(u1);

}






vector<Ex_C*> Ex_C::util_ex_objs_function_exc (Ex_C * u) {

     return u->exc_objs;}






void Exhibit::display_c1_str_items(vector<tuple<int,string,string>> v) {

        cout << "c1 attributes with string type :" << newline;

        for (auto& i: v ) {cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) <<newline;}

        cout << newline;

}



void Exhibit::display_c2_int_items(vector<tuple<int,string,int>> v) {


       cout << "c2 attributes with int type : " << newline;

       for (auto& i: v ) {cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << newline;}

       cout << newline;

}



void Exhibit::display_c3_float_items(vector<tuple<int,string,float>> v) {

        cout << "c3 attributes with float type : " << newline;

        for (auto& i: v ) {cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) <<newline;}

        cout << newline;

}




void Exhibit::display_c4_bool_items(vector<tuple<int,string,bool>> v) {

        cout << "c4 attributes with bool type : " << newline;

        for (auto& i: v ) {cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) <<newline;}

        cout << newline;

}



	
void Exhibit::printSummary(string str, int value) {

     cout << "Winners of the competition:" << newline;

     cout << "Class represented by " << str << " with maximum score "  << value << newline; 


}






