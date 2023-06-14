#include<iostream>
#include<vector>
#include<sstream>
#include<map>
#include<set>
#include<algorithm>
#include<unordered_map>
using namespace std;
//// DE 1: CAU 1:
void findAndPrintUncommonChars(string str1, string str2){
    for(const auto &x : str1){
        if(str2.find(x) == string :: npos){
            cout << x << " ";
        }
    }

    for(const auto &x : str2){
        if(str1.find(x) == string :: npos){
            cout << x << " ";
        }
    }

    cout << endl;
}

int main(int argc, char* argv[]){
    string s1 = "egeksfroeegks";
    string s2 = "eegksquiz";
    findAndPrintUncommonChars(s1, s2);
}













//// DE 10:
// void tim(vector<int> a){
//     unordered_map<int , int> mp;

//     for(int i=0; i<a.size(); i++){
//         mp[a[i]] ++;
//     }

//     for(auto x : mp){
//         cout << x.first << "  " << x.second << endl;
//     }
// }

// int main(int argc, char* argv[]){
//     vector<int> a = {1,2,2,3,1,4,4,5,6,7,1,8,5,9,4,2};
//     tim(a);
// }











//// DE 4:
// string processString(string str){
//     string result = "";
//     for (int i = 0; i < str.length(); i++) {
//         if (isalpha(str[i])) {
//             result += tolower(str[i]);
//         } else if (isspace(str[i])) {
//             result += ' ';
//         }
//     }
//     return result;
// }

// int main() {
//     string input = "What IS your NaMe??? My name is &*what.";
//     string result = processString(input);
//     cout << result << endl; // kết quả: what is your name my name is what
//     return 0;
// }












//// DE 3:
// void winner(vector<string> votes){
//     unordered_map<string, int> countVotes;
//     for(auto vote : votes){
//         countVotes[vote] ++;
//     }

//     string winnerVote;
//     int count = 0;
//     string minName;
//     for(auto p : countVotes){
//         if(p.second > count || (p.first.size() < minName.size() && p.second == count)){
//             winnerVote = p.first;
//             count = p.second;
//             minName = p.first;
//         }
//     }
//     cout << "Winner" << " " << winnerVote << endl;
//     cout << "CountVotes" << " " << count << endl;
// }


// int main(int argc, char* argv[]){
//     vector<string> votes = {"john","jackie","johnny","john","jackie","jamie","jamie","john","johnny","jamie","johnny","john"}; 
//     vector<string> vote = {"andy","blake","clark"};

//     winner(votes);
//     winner(vote);
    
// }









//// DE 2:
// struct Interval{
//     int start;
//     int end;

//     Interval(int s, int e) : start(s), end(e){}
// };

// bool so_sanh(Interval s1, Interval s2){
//     return s1.start<s2.start;
// }

// void display(vector<Interval> meetings){
//     for(auto m : meetings){
//         cout << "[" << m.start << " , " << m.end << "]" << endl;
//     }
// }

// // Hàm hiển thị khoảng thời gian đã đăng ký cho mỗi cuộc họp
// void showBookedTime(vector<Interval> meetings) {
//     int startTime = meetings[0].start;
//     int endTime = meetings[0].end;
//     cout << "[" << startTime << ", "; // In ra thời gian đầu tiên đã đăng ký
//     for (int i = 1; i < meetings.size(); i++) {
//         // Nếu thời gian bắt đầu của cuộc họp kế tiếp được đăng ký trong khoảng thời gian đang xét,
//         // ta cập nhật thời gian kết thúc của khoảng thời gian đang xét.
//         if (meetings[i].start <= endTime) {
//             endTime = max(endTime, meetings[i].end);
//         }
//         // Nếu thời gian bắt đầu của cuộc họp kế tiếp không được đăng ký trong khoảng thời gian đang xét,
//         // ta in ra khoảng thời gian đã đăng ký của cuộc họp đó và cập nhật lại khoảng thời gian đang xét.
//         else {
//             cout << endTime << "]" << endl;
//             startTime = meetings[i].start;
//             endTime = meetings[i].end;
//             cout << "[" << startTime << ", ";
//         }
//     }
//     cout << endTime << "]" << endl; // In ra khoảng thời gian đã đăng ký của cuộc họp cuối cùng
// }
// int main(int argc, char* argv[]){
//     vector<Interval> meetings = {{1,5}, {3,4}, {0,3}, {8,10}, {8,9}};

//     sort(meetings.begin(), meetings.end(), so_sanh);

//     cout << "Danh sach cuoc gap: " << endl;
//     display(meetings);

//     // In ra khoảng thời gian đã đăng ký cho mỗi cuộc họp
//     cout << "Booked time for each meeting: " << endl;
//     showBookedTime(meetings);
// }








//Kiem tra dia chi IP
// bool check(string s){
//     vector<string>vec;
//     istringstream iss(s);
//     string token;
//     while(getline(iss,token,'.')){
//         if(token.empty()||stoi(token)>255){
//             return false;
//         }
//         vec.push_back(token);
//     }
//     if(vec.size()!=4){
//         return false;
//     }
//     for(int i=vec.size()-1;i>=0;i--){
//         if(vec.empty()||stoi(vec[i])>255){
//             return false;
//         }
//     }
//     return true;
// }
// int main(int argc, char*argv[]){
//     string s="1.2.1.2";
//     if(check(s) && s.size() == 7){
//         cout<<"hop le"<<endl;
//     }
//     else{
//         cout<<"khong hop le"<<endl;
//     }
// }









// vector<string> convert(string s){
//     istringstream iss(s);
//     vector<string> luu;
//     string token;
//     while(iss >> token){
//         luu.push_back(token);
//     }
//     return luu;
// }


// int main(int argc, char* argv[]){
//     string a = "abcef14&f";
//     string b = "b1&";
//     // vector<string> s1 = convert(a);
//     // vector<string> s2 = convert(b);

//     for(int i=0; i<a.size(); i++){
//         for(int j=0; j<b.size(); j++){
//             if(a[i] == b[j]){
//                 cout << i << "    " << a[i] << endl;
//             }
//         }
//     }

//     // for(auto x : s1){
//     //     if(find(s2.begin(), s2.end(), x) != s2.end()){
//     //         cout << x;
//     //     }
//     // }
//     // cout << endl;
// }







// Số đẹp(Là số thuận nghịch và chỉ toàn số chẵn)
// bool check(string s){
//     string t = s;
//     reverse(s.begin(), s.end());
//     if(s != t){
//         return false;
//     }

//     for(auto x : s){
//         if((x-'0')%2==1){
//             return false;
//         }
//     }
//     return true;
// }

// int main(int argc, char* argv[]){
//     //string s = "12321";
//     string s = "22422";
//     // string m = "Ha noi dep troi";
//     if(check(s)){
//         cout << "Yes" << endl;
//     }else{
//         cout << "no" << endl;
//     }

//     // reverse(m.begin(), m.end());
//     // for(auto x : m){
//     //     cout << x;
//     // }
// }









// Tìm số bé nhất và số lớn nhất có x chữ số và có tổng là y
// int main(int argc, char* argv[]){
//     int x;
//     cout << "Nhap so tu nhien x (chu so): ";
//     cin >> x;
//     int y;
//     cout << "Nhap so tu nhien y (tong): ";
//     cin >> y;
//     if(y>9*x || x>0 && y==0){
//         return -1;
//     }
//     int tmp = y;
//     int lon[x] = {0};
//     int be[x] = {0};
//     for(int i=0; i<x; i++){
//         if(y >= 9){
//             lon[i]=9;
//             y -= 9;
//         }else if( y!= 0){
//             lon[i] = y;
//             y = 0;
//         }else{
//             break;
//         }
//     }
//     tmp --;
//     for(int i=x-1; i>0; i--){
//         if(tmp >= 9){
//             be[i]=9;
//             tmp -= 9;
//         }else if(tmp != 0){
//             be[i] = tmp;
//             tmp = 0;
//         }else{
//             break;
//         }
//     }
//     be[0] = tmp + 1;

//     cout << "So be nhat la: ";
//     for(int i=0; i<x; i++){
//         cout << be[i];
//     }

//     cout << endl;

//     cout << "So lon nhat la: ";
//     for(int i=0; i<x; i++){
//         cout << lon[i];
//     }

// }







// Tim cac ki tu khac nhau trong chuoi
// int main(int argc, char* argv[]){
//     string s = "ABCJEWIJEASAWW";
//     //string s = "ABC";

//     istringstream iss(s);
//     map<char, int> mp;

//     for(auto c : s){
//         mp[c] ++;
//     }

//     for(auto x : s){
//         if(mp[x] == 1){
//             cout << x ;
//         }
//     }
//     cout << endl;
// }








// Tim chuoi co diem dau va cuoi giong nhau
// int main(int argc, char* argv[]){
//     string s = "abcbacb";
//     istringstream iss(s);
//     map<char, int> mp;
//     for(auto x : s){
//         mp[x] ++;
//     }

//     long long a = s.size();
//     for(auto y : mp){
//         a += y.second*(y.second-1)/2;
//     }
//     cout << a << endl;
// }






// int main(int argc, char* argv[]){
//     string s = "ferjferjferfhrhrgtrhgttgbt";
//     set<char> se; //lay ki tu khong trung lap
//     for(auto x : s){
//         se.insert(x);
//     }
//     if(se.size() == 26){
//         cout << "yes" << endl;
//     }else{
//         cout << "no" << endl;
//     }
// }








// void vietHoa(string &s){
//     for(int i=0; i<s.size(); i++){
//         s[i] = toupper(s[i]);
//     }
// }

// void vietHoaChuDau(string &s){
//     s[0] = toupper(s[0]);
//     for(int i=1; i<s.size(); i++){
//         s[i] = tolower(s[i]);
//     }
// }

// int main(int argc, char* argv[]){
//     string s = "DANG THI thuy liNH";
//     // output = Linh, Dang Thi Thuy
//     istringstream iss(s);
//     string token;
//     vector<string> luu;
//     while(iss >> token){
//         luu.push_back(token);
//     }

//     vietHoaChuDau(luu.back());
//     cout << luu.back() << ", ";


//     for(int i=0; i<luu.size()-1; i++){
//         vietHoaChuDau(luu[i]);
//         cout << luu[i] << " ";
//     }
    



//     string s = "DANG THI thuy liNH";
//     // output : Dang Thi Thuy, LINH
//     istringstream iss(s);
//     string token;
//     vector<string> luu;
//     while(iss >> token){
//         luu.push_back(token);
//     }

//     for(int i=0; i<luu.size()-1; i++){
//         vietHoaChuDau(luu[i]);
//         cout << luu[i];
//         if(i == luu.size()-2){
//             cout << ", ";
//         }else{
//             cout << " ";
//         }
//     }
//     vietHoa(luu.back());
//     cout << luu.back() << endl;

// }










// Tao email tiep(nang cao)
// int main(int argc, char* argv[]){
//     string  s = "Dang   thi Thuy Linh, Dang thanh Phuong, Nguyen Thi Ha, Dang thanh thuy";

//     for(int i=0; i<s.size(); i++){
//         s[i] = tolower(s[i]);
//     }

//     map<string, int> mp;
//     istringstream iss(s);
//     string token;
//     vector<string> luu;
//     string res = " ";
//     while(iss >> token){
//         luu.push_back(token);
//     }
//     res += luu.back();

//     for(int i=0; i<luu.size()-1; i++){
//         res += luu[i][0];
//     }

//     if(mp[res] == 0){ //tim xem ten co trong map khong
//         cout << res << "@gmail.com.vn" << endl;
//     }else{
//         cout << res << mp[res] + 1 << "@gmail.com.vn" << endl;
//     }
//     mp[res] ++;

//     // output = linhdtt@gmail.com.vn;
// }








// Tao email
// int main(int argc, char* argv[]){
//     string s = "Dang   thi Thuy Linh";

//     for(int i=0; i<s.size(); i++){
//         s[i] = tolower(s[i]);
//     }

//     // for(auto x : s){
//     //     x = tolower(x);
//     // }

//     istringstream iss(s);
//     string token;
//     vector<string> luu;
//     while(iss >> token){
//         luu.push_back(token);
//     }
//     cout << luu.back();
//     //cout << luu[luu.size()-1];

//     for(int i=0; i<luu.size()-1; i++){
//         cout << luu[i][0];
//     }
//     cout << "@gmail.com.vn" << endl;

//     // output = linhdtt@gmail.com.vn;

// }
    





// xoa tu trong chuoi
// int main(int argc, char* argv[]){
//     string s = "Hello. My name is Linh";
//     string s1 = "is";
//     istringstream iss(s);
//     string token;
//     //vector<string> luu;
//     while(iss >> token){
//         if(token != s1){
//             cout << token << " ";
//             //luu.push_back(token);
//         }
//     }

//     // De khong con dau cach cuoi chuoi
//     // for(int i=0; i<luu.size(); i++){
//     //     cout << luu[i];
//     //     if(i != luu.size() - 1){
//     //         cout << " ";
//     //     }
//     // }
// }









// Dem so luong tu trong chuoi
// int main(int argc, char* argv[]){
//     string s = "Hello. My name is Linh";
//     istringstream iss(s);
//     string word;
//     int count = 0;
//     //vector<string> luu;
//     while(iss >> word){
//         count ++;
//         //luu.push_back(word);
//     }
//     cout << "So luong tu trong chuoi la: " << count <<  endl;
    
//     // for(auto c : luu){
//     //     cout << c << endl;
//     // }
// }









//// BAI 1:

// void getWinner(string a, string b){
//     if(a.size() != b.size()){
//         cout << "Loi" << endl;
//         return;
//     }
//     for(auto c : a){
//         c = tolower(c);
//         if(c != 'b' && c != 'k' && c != 'g'){
//             cout << "Loi" << endl;
//             return;
//         }
//     }
//     for(auto c : b){
//         c = tolower(c);
//         if(c != 'b' && c != 'k' && c != 'g'){
//             cout << "Loi" << endl;
//             return;
//         }
//     }

//     int scoreA = 0;
//     for(int i=0;i<a.size();i++){
//         if(tolower(a[i])=='b'){
//             if(tolower(b[i])=='k'){
//                 scoreA++;
//             }else if(tolower(b[i])=='g'){
//                 scoreA--;
//             }
//         }else if(tolower(a[i])=='k'){
//             if(tolower(b[i])=='g'){
//                 scoreA++;
//             }else if(tolower(b[i])=='b'){
//                 scoreA--;
//             }
//         }else{
//            if(tolower(b[i])=='b'){
//                 scoreA++;
//             }else if(tolower(b[i])=='k'){
//                 scoreA--;
//             } 
//         }
//     }
//     if(scoreA == 0){
//         cout << "Hoa nhau" << endl;
//     }else if(scoreA > 0){
//         cout << "A thang" << endl;
//     }else{
//         cout << "B thang" << endl;
//     }
// }

// int main(int argc, char* argv[]){
//     string A = "bkg";
//     string B = "bbgk";
//     getWinner(A,B);
    
    
// }