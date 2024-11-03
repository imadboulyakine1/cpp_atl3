class Pile {
    private:
       vector<int> elements;
    public:
       Pile(){}
         

   void push(int element){
         elements.push_back(element);
         cout << "push "<< element <<endl;
   }      
 int pop(){
     if(elements.size==0){
        cout<<"le pile est vide"<< endl;
        return 0;
     }
   
        int element = elements.back();
        elements.pop_back();
        return element;

   }
 };
 int main(){
    pile P1,P2;
    P1.push(10);
    P1.push(20);
    P1.push(30);
       cout << " p1: " << p1.pop() << endl;
       cout << " p1: " << p1.pop() << endl;
 }