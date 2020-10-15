#include <iostream>

#include "dc_1.hpp"




int main() {

        //Exhibit u_db;

        Exhibit u;

        Exhibit uone;

        Ex_A exa1;

        Ex_A exa2;

        Ex_B exb1;

        Ex_B exb2;

        Ex_C exc1;

        Ex_C exc2;


     
	u.printIntro();

        char val; 

        cout << "Display rules (y/n) : " << newline;

        cin >> val;

        cout << newline;  

        if (val == 'y') {u.display_rules();}

        u.util_attr_function();



        
        //u

        u.name = u.createAttribute_name<string>(&u, "**Stegosaurus**");

        u.birth = u.createAttribute_birth<int>(&u, 15*10000000);

        u.height = u.createAttribute_height<float>(&u, 1.0);
    
        u.weight = u.createAttribute_weight<int>(&u, 7000);

        u.colour = u.createAttribute_colour<string>(&u, "green");
       
        u.food = u.createAttribute_food<string>(&u, "herbivorous");

        u.name_int = false;

        u.birth_str = "false";

        u.height_str ="false";

        u.weight_str = "false";

        u.colour_int = false;

        u.food_int = true;



        u.addAttribute(&u, u.name);

        u.addAttribute(&u, to_string(u.birth));

        u.addAttribute(&u, to_string(u.height));

        u.addAttribute(&u, to_string(u.weight));

        u.addAttribute(&u, u.colour);

        u.addAttribute(&u, u.food);




       //uone

        uone.name = uone.createAttribute_name<string>(&uone, "**Kentrosaurus**");

        uone.birth = uone.createAttribute_birth<int>(&uone, 15*10000000);

        uone.height = uone.createAttribute_height<float>(&uone, 1.0);
    
        uone.weight = uone.createAttribute_weight<int>(&uone, 1100);

        uone.colour = uone.createAttribute_colour<string>(&uone, "grey");
       
        uone.food = uone.createAttribute_food<string>(&uone, "herbivorous");

        uone.name_int =false;

        uone.birth_str = "false";

        uone.height_str = "false";

        uone.weight_str = "false";

        uone.colour_int = false;

        uone.food_int = true;



        uone.addAttribute(&uone, uone.name);

        uone.addAttribute(&uone, to_string(u.birth));

        uone.addAttribute(&uone, to_string(uone.height));

        uone.addAttribute(&uone, to_string(uone.weight));

        uone.addAttribute(&uone, uone.colour);

        uone.addAttribute(&uone, uone.food);




        //exa1

        exa1.name = exa1.createAttribute_name<string>(&exa1, "**Coelurus**");

        exa1.birth = exa1.createAttribute_birth<int>(&exa1, 155*1000000);

        exa1.height = exa1.createAttribute_height<float>(&exa1, 0.7);
    
        exa1.weight = exa1.createAttribute_weight<int>(&exa1, 20);

        exa1.colour = exa1.createAttribute_colour<string>(&exa1, "brown");
       
        exa1.food = exa1.createAttribute_food<string>(&exa1, "carnivorous");

        exa1.name_int = false;

        exa1.birth_str = "false";

        exa1.height_str ="false";

        exa1.weight_str = "false";

        exa1.colour_int = false;

        exa1.food_int = true;

        exa1.tail = "long";

        exa1.claws = "big";

        exa1.communication = "known";

        exa1.sociable = "known";

        exa1.babies = 0;

        exa1.tones_of_food_per_year = 0.72;



        exa1.addAttribute(&exa1, exa1.name);

        exa1.addAttribute(&exa1, to_string(exa1.birth));

        exa1.addAttribute(&exa1, to_string(exa1.height));

        exa1.addAttribute(&exa1, to_string(exa1.weight));

        exa1.addAttribute(&exa1, exa1.colour);

        exa1.addAttribute(&exa1, exa1.food);



       
        //exa2
        
        exa2.name = exa2.createAttribute_name<string>(&exa2, "**Deinonychus**");

        exa2.birth = exa2.createAttribute_birth<int>(&exa2, 115*1000000);

        exa2.height = exa2.createAttribute_height<float>(&exa2, 1.5);
    
        exa2.weight = exa2.createAttribute_weight<int>(&exa2, 100);

        exa2.colour = exa2.createAttribute_colour<string>(&exa2, "brown");
       
        exa2.food = exa2.createAttribute_food<string>(&exa2, "carnivorous");

        exa2.name_int = false;

        exa2.birth_str = "false";

        exa2.height_str ="false";

        exa2.weight_str = "false";

        exa2.colour_int = false;

        exa2.food_int = true;

        exa2.tail = "long";

        exa2.claws = "big";

        exa2.communication = "known";

        exa2.sociable = "known";

        exa2.babies = 0;

        exa2.tones_of_food_per_year = 1.825;



        exa2.addAttribute(&exa2, exa2.name);

        exa2.addAttribute(&exa2, to_string(exa2.birth));

        exa2.addAttribute(&exa2, to_string(exa2.height));

        exa2.addAttribute(&exa2, to_string(exa2.weight));

        exa2.addAttribute(&exa2, exa2.colour);

        exa2.addAttribute(&exa2, exa2.food);




        //exb1

        
        exb1.name = exb1.createAttribute_name<string>(&exb1, "**Torvosaurus**");

        exb1.birth = exb1.createAttribute_birth<int>(&exb1, 15*10000000);

        exb1.height = exb1.createAttribute_height<float>(&exb1, 3);
    
        exb1.weight = exb1.createAttribute_weight<int>(&exb1, 3500);

        exb1.colour = exb1.createAttribute_colour<string>(&exb1, "grey");
       
        exb1.food = exb1.createAttribute_food<string>(&exb1, "carnivorous");

        exb1.name_int = false;

        exb1.birth_str = "false";

        exb1.height_str ="false";

        exb1.weight_str = "false";

        exb1.colour_int = false;

        exb1.food_int = true;

        exb1.tail = "long";

        exb1.claws = "big";

        exb1.communication = "known";

        exb1.sociable = "known";

        exb1.babies = 10;

        exb1.tones_of_food_per_year = 10.95;

        exb1.weird_habits = false;

        exb1.night_hunter = false;



        exb1.addAttribute(&exb1, exb1.name);

        exb1.addAttribute(&exb1, to_string(exb1.birth));

        exb1.addAttribute(&exb1, to_string(exb1.height));

        exb1.addAttribute(&exb1, to_string(exb1.weight));

        exb1.addAttribute(&exb1, exb1.colour);

        exb1.addAttribute(&exb1, exb1.food);





        //exb2

        
        exb2.name = exb2.createAttribute_name<string>(&exb2, "**Allosaurus**");

        exb2.birth = exb2.createAttribute_birth<int>(&exb2, 15*10000000);

        exb2.height = exb2.createAttribute_height<float>(&exb2, 2);
    
        exb2.weight = exb2.createAttribute_weight<int>(&exb2, 2500);

        exb2.colour = exb2.createAttribute_colour<string>(&exb2, "grey");
       
        exb2.food = exb2.createAttribute_food<string>(&exb2, "carnivorous");

        exb2.name_int = false;

        exb2.birth_str = "false";

        exb2.height_str ="false";

        exb2.weight_str = "false";

        exb2.colour_int = false;

        exb2.food_int = true;

        exb2.tail = "long";

        exb2.claws = "big";

        exb2.communication = "known";

        exb2.sociable = "known";

        exb2.babies = 10;

        exb2.tones_of_food_per_year = 10.95;

        exb2.weird_habits = false;

        exb2.night_hunter = false;



        exb2.addAttribute(&exb2, exb2.name);

        exb2.addAttribute(&exb2, to_string(exb2.birth));

        exb2.addAttribute(&exb2, to_string(exb2.height));

        exb2.addAttribute(&exb2, to_string(exb2.weight));

        exb2.addAttribute(&exb2, exb2.colour);

        exb2.addAttribute(&exb2, exb2.food);




        //exc1

        
        exc1.name = exc1.createAttribute_name<string>(&exc1, "**Tyrannosaurus**");

        exc1.birth = exc1.createAttribute_birth<int>(&exc1, 66*1000000);

        exc1.height = exc1.createAttribute_height<float>(&exc1, 3.6);
    
        exc1.weight = exc1.createAttribute_weight<int>(&exc1, 12000);

        exc1.colour = exc1.createAttribute_colour<string>(&exc1, "grey");
       
        exc1.food = exc1.createAttribute_food<string>(&exc1, "carnivorous");

        exc1.name_int = false;

        exc1.birth_str = "false";

        exc1.height_str ="false";

        exc1.weight_str = "false";

        exc1.colour_int = false;

        exc1.food_int = true;

        exc1.tail = "long";

        exc1.claws = "big";

        exc1.communication = "known";

        exc1.sociable = "known";

        exc1.babies = 8;

        exc1.tones_of_food_per_year = 60.95;

        exc1.weird_habits = false;

        exc1.active = true;

        exc1.create_own_home = true;

        exc1.aggressive = true;

        exc1.age_of_independency = 15;




        exc1.addAttribute(&exc1, exc1.name);

        exc1.addAttribute(&exc1, to_string(exc1.birth));

        exc1.addAttribute(&exc1, to_string(exc1.height));

        exc1.addAttribute(&exc1, to_string(exc1.weight));

        exc1.addAttribute(&exc1, exc1.colour);

        exc1.addAttribute(&exc1, exc1.food);





        //exc2

        
        exc2.name = exc2.createAttribute_name<string>(&exc2, "**Hadrosaurus**");

        exc2.birth = exc2.createAttribute_birth<int>(&exc2, 78*1000000);

        exc2.height = exc2.createAttribute_height<float>(&exc2, 2.5);
    
        exc2.weight = exc2.createAttribute_weight<int>(&exc2, 2000);

        exc2.colour = exc2.createAttribute_colour<string>(&exc2, "brown");
       
        exc2.food = exc2.createAttribute_food<string>(&exc2, "herbivorous");

        exc2.name_int = false;

        exc2.birth_str = "false";

        exc2.height_str ="false";

        exc2.weight_str = "false";

        exc2.colour_int = false;

        exc2.food_int = true;

        exc2.tail = "long";

        exc2.claws = "small";

        exc2.communication = "known";

        exc2.sociable = "known";

        exc2.babies = 20;

        exc2.tones_of_food_per_year = 10.5;

        exc2.weird_habits = false;

        exc2.active = true;

        exc2.create_own_home = true;

        exc2.aggressive = false;

        exc2.age_of_independency = 10;




        exc2.addAttribute(&exc2, exc2.name);

        exc2.addAttribute(&exc2, to_string(exc2.birth));

        exc2.addAttribute(&exc2, to_string(exc2.height));

        exc2.addAttribute(&exc2, to_string(exc2.weight));

        exc2.addAttribute(&exc2, exc2.colour);

        exc2.addAttribute(&exc2, exc2.food);




        
       vector<string> obj;

       obj = u.util_v_function(&u);

       u.display_v_str_items(obj);

       cout << newline;



       vector<string> objone;

       objone = uone.util_v_function(&uone);

       uone.display_v_str_items(objone);

       cout << newline;


       
       vector<string> objtwo;

       objtwo = exa1.util_v_function(&exa1);

       exa1.display_v_str_items(objtwo);

       cout << newline;



       vector<string> objthree;

       objthree = exa2.util_v_function(&exa2);

       exa2.display_v_str_items(objthree);

       cout << newline;




       vector<string> objfive;

       objfive = exb1.util_v_function(&exb1);

       exb1.display_v_str_items(objfive);

       cout << newline;



       vector<string> objsix;

       objsix = exb2.util_v_function(&exb2);

       exb2.display_v_str_items(objsix);

       cout << newline;
        


       
       vector<string> objseven;

       objseven = exc1.util_v_function(&exc1);

       exc1.display_v_str_items(objseven);

       cout << newline;



         
       vector<string> objeight;

       objeight = exc2.util_v_function(&exc2);

       exc2.display_v_str_items(objeight);

       cout << newline;

      
      cout <<  "o------------------------------------------------------------------o" << newline << newline;   


     
     //each instance can store a list of class objects

       u.util_vitems_function(&u, &u);

       u.util_vitems_function(&u, &uone);
 
       vector<Exhibit*> obj1;

       obj1 = u.util_ex_objs_function(&u);

       u.display_items(obj1);

       cout << newline;


  
      u.add_to_string(obj1, &u);
     
      u.add_to_int(obj1, &u);

      u.add_to_float(obj1, &u);

      vector<tuple<int,string,string>> v1;

      vector<tuple<int,string,int>>vone;

      vector<tuple<int,string, float>> vtwo;

      v1.resize(12);

      vone.resize(12);

      vtwo.resize(12);

      v1 = u.util_c1_str_function(&u);

      vone =u.util_c2_int_function(&u);

      vtwo = u.util_c3_float_function(&u);

      cout << newline;

      cout << "c1 items: " << v1.size() << newline;

      cout << "c2 items: " << vone.size() << newline;

      cout << "c3 items: " << vtwo.size() << newline;

      cout << newline;

      u.display_c1_str_items(v1); 

      u.display_c2_int_items(vone);

      u.display_c3_float_items(vtwo);

      cout << newline;    


      cout <<  "o------------------------------------------------------------------o" << newline << newline; 


      exa1.util_vitems_function_exa(&exa1, &exa1);

      exa1.util_vitems_function_exa(&exa1, &exa2);

      vector<Ex_A*> obj2;

      obj2 = exa1.util_ex_objs_function_exa(&exa1);

      exa1.display_items(obj2);

      cout << newline;



      exa1.add_to_string(obj2, &exa1);
     
      exa1.add_to_int(obj2, &exa1);

      exa1.add_to_float(obj2, &exa1);

      exa1.add_to_string_exa(obj2, &exa1);
     
      exa1.add_to_int_exa(obj2, &exa1);

      exa1.add_to_float_exa(obj2, &exa1);

      vector<tuple<int,string,string>> v_2;

      vector<tuple<int,string,int>>v_3;

      vector<tuple<int,string, float>> v_4;

      v_2.resize(12);

      v_3.resize(12);

      v_4.resize(12);

      v_2 = exa1.util_c1_str_function(&exa1);

      v_3 =exa1.util_c2_int_function(&exa1);

      v_4 =exa1.util_c3_float_function(&exa1);

      cout << newline;

      cout << "c1 items: " << v_2.size() << newline;

      cout << "c2 items: " << v_3.size() << newline;

      cout << "c3 items: " << v_4.size() << newline;

      cout << newline;

      exa1.display_c1_str_items(v_2); 

      exa1.display_c2_int_items(v_3);

      exa1.display_c3_float_items(v_4);

      cout << newline;  
    
   


      cout <<  "o------------------------------------------------------------------o" << newline << newline;  


      exb1.util_vitems_function_exb(&exb1, &exb1);

      exb1.util_vitems_function_exb(&exb1, &exb2);

      vector<Ex_B*> obj3;

      obj3 = exb1.util_ex_objs_function_exb(&exb1);

      exb1.display_items(obj3);

      cout << newline; 



      exb1.add_to_string(obj3, &exb1);
     
      exb1.add_to_int(obj3, &exb1);

      exb1.add_to_float(obj3, &exb1);

      exb1.add_to_string_exb(obj3, &exb1);
     
      exb1.add_to_int_exb(obj3, &exb1);

      exb1.add_to_float_exb(obj3, &exb1);

      exb1.add_to_bool_exb(obj3, &exb1);

      vector<tuple<int,string,string>> v_5;

      vector<tuple<int,string,int>>v_6;

      vector<tuple<int,string, float>> v_7;

      vector<tuple<int,string, bool >> v_8;

      v_5.resize(12);

      v_6.resize(12);

      v_7.resize(12);

      v_8.resize(12);

      v_5 = exb1.util_c1_str_function(&exb1);

      v_6 = exb1.util_c2_int_function(&exb1);

      v_7 = exb1.util_c3_float_function(&exb1);

      v_8 = exb1.util_c4_bool_function(&exb1);

      cout << newline;

      cout << "c1 items: " << v_5.size() << newline;

      cout << "c2 items: " << v_6.size() << newline;

      cout << "c3 items: " << v_7.size() << newline;

      cout << "c4 items: " << v_8.size() << newline;

      cout << newline;

      exb1.display_c1_str_items(v_5); 

      exb1.display_c2_int_items(v_6);

      exb1.display_c3_float_items(v_7);
     
      exb1.display_c4_bool_items(v_8); 

      cout << newline;  
       

      cout <<  "o------------------------------------------------------------------o" << newline << newline;


      exc1.util_vitems_function_exc(&exc1, &exc1);

      exc1.util_vitems_function_exc(&exc1, &exc2);

      vector<Ex_C*> obj4;

      obj4 = exc1.util_ex_objs_function_exc(&exc1);

      exc1.display_items(obj4);

      cout << newline; 



      exc1.add_to_string(obj4, &exc1);
     
      exc1.add_to_int(obj4, &exc1);

      exc1.add_to_float(obj4, &exc1);

      exc1.add_to_string_exc(obj4, &exc1);
     
      exc1.add_to_int_exc(obj4, &exc1);

      exc1.add_to_float_exc(obj4, &exc1);

      exc1.add_to_bool_exc(obj4, &exc1);

      vector<tuple<int,string,string>> v_9;

      vector<tuple<int,string,int>>v_10;

      vector<tuple<int,string, float>> v_11;

      vector<tuple<int,string, bool >> v_12;

      v_9.resize(12);

      v_10.resize(12);

      v_11.resize(12);

      v_12.resize(12);

      v_9 = exc1.util_c1_str_function(&exc1);

      v_10 = exc1.util_c2_int_function(&exc1);

      v_11 = exc1.util_c3_float_function(&exc1);

      v_12 = exc1.util_c4_bool_function(&exc1);

      cout << newline;

      cout << "c1 items: " << v_9.size() << newline;

      cout << "c2 items: " << v_10.size() << newline;

      cout << "c3 items: " << v_11.size() << newline;

      cout << "c4 items: " << v_12.size() << newline;

      cout << newline;

      exc1.display_c1_str_items(v_9); 

      exc1.display_c2_int_items(v_10);

      exc1.display_c3_float_items(v_11);
     
      exc1.display_c4_bool_items(v_12); 

      cout << newline;   



       
       
       //u.util_vitems_function(&u, &u);

       //u.util_vitems_function(&u, &uone);

        u.util_vitems_function(&u, &exa1);

        u.util_vitems_function(&u, &exa2);
       
        u.util_vitems_function(&u, &exb1);

        for ( vector<Ex_B*>::iterator it=obj3.begin()+1; it!=obj3.end(); it++) {(*it)->score = 0;}

        u.util_vitems_function(&u, &exb2);

        u.util_vitems_function(&u, &exc1);
    
        for (vector<Ex_C*>::iterator it1=obj4.begin()+1; it1!=obj4.end(); it1++) {(*it1)->score = 0;}

        u.util_vitems_function(&u, &exc2);
 

       cout <<  "o----------------------------cC( )Ɔɔ-------------------------o" << newline;  

       cout << newline << newline;                                                  

       
       vector<Exhibit*> obj5;

       obj5 = u.util_ex_objs_function(&u);

       u.display_items(obj5);

       cout << newline << newline;

      
       cout <<  "o----------------------------cC( )Ɔɔ-------------------------o" << newline;  

       cout << newline;
   
       float avg_height;

       avg_height = u.find_avg_height(obj5, &u);

       cout << "Average height:" << avg_height <<  " " << newline;



        float avg_weight;

        avg_weight = u.find_avg_weight(obj5, &u);

        cout << "Average weight:" << avg_weight << newline << newline;


       cout <<  "o----------------------------cC( )Ɔɔ-------------------------o" << newline;  

       cout << newline;

     
       int max_height;

       max_height = u.util_height_function(obj5);

       cout << max_height << newline << newline;


        
       int max_weight;

       max_weight = u.util_weight_function(obj5);

       cout << max_weight << newline << newline;

       
       cout <<  "o----------------------------cC( )Ɔɔ-------------------------o" << newline;  

       cout << newline;

       int count = u.find_count_items(obj5);

       cout << count << newline << newline;


     
        string var_I;
 
        cout << "Display count for each class (y/n)" << newline;

        cin >> var_I;

        cout << newline;

        string className;

        if (var_I == "y") { cout << "Choose class name: " << newline;

                          cin >> className;

                            
                          if (className == "Exhibit") { cout << u.find_count_items(obj1) << newline << newline;}

                          else if (className == "Ex_A") {cout << u.find_count_items(obj2) << newline << newline;}

                          else if (className == "Ex_B") {cout << u.find_count_items(obj3) << newline << newline;}

                          else if (className == "Ex_C") {cout << u.find_count_items(obj4) << newline << newline;}

                          else {cout << "Enter a valid name" << newline << newline;}}

  


       cout <<  "o----------------------------cC( )Ɔɔ-------------------------o" << newline;  

       cout << newline;

        //u->score is calculated with all the scores which are stored in the Exhibit class
       
        float avg_score;

        avg_score = u.find_avg_score(obj5, &u);

        u.find_avg_score(obj5, &u);

        cout << "Average score:" << avg_score << newline << newline;


 
        string var1;
 
        cout << "Display score for each class (y/n)" << newline;

        cin >> var1;

        cout << newline;

        string class_name;

        if (var1 == "y") { cout << "Choose class name: " << newline;

                          cin >> class_name;

                            
                          if (class_name == "Exhibit") { cout << u.find_score(&u) << newline << newline;}

                          else if (class_name == "Ex_A") {cout << u.find_score(&exa1) << newline << newline;}

                          else if (class_name == "Ex_B") {cout << u.find_score(&exb1) << newline << newline;}

                          else if (class_name == "Ex_C") {cout << u.find_score(&exc1) << newline << newline;}

                          else {cout << "Enter a valid name" << newline << newline;}}

               




       string str;

       int max_score;

       max_score = u.util_score_function(obj5, &str);

       cout << max_score << newline << newline;

 
      cout <<  "o----------------------------cC( )Ɔɔ-------------------------o" << newline;  

      cout << newline;

      u.printSummary(str, max_score);

     
     cout << newline << newline;

     cout <<  "o----------------------------cC( )Ɔɔ-------------------------o" << newline;   
                                                 

}
