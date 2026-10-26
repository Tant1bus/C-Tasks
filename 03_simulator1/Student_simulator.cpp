#include "Student_functions.cpp"
#include <string>
using namespace std;
int main(){
    Student st;
    st.start_game();
    int m;
    string act;
    cin >> m;
    for (int i = 0; i < m; i ++){
        cin >> act;
        if(act == "Wait") st.wait();
        else if (act == "Eat") st.eat();
        st.show();
    }
    
}