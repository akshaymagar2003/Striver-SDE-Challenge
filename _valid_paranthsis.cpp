// bool isValidParenthesis(string &s)
// {  stack <char>p;
//   for(int i = 0; i < s.size(); i++) {

//     if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
//     p.push(s[i]);

//     } else if (s[i] == ')' && p.top() == '(' && !p.empty()) {
//       p.pop();

//     } else if (s[i] == '}' && p.top() == '{'&& !p.empty()) {
//       p.pop();
//     } else if (s[i] == ']' && p.top() == '['&& !p.empty()) {
//        p.pop();

//     } else{
//         return false;
//     }
//   }
//   if(p.empty()){
//       return true;
//   } else {
//   return false;
//   }
// }
bool isValidParenthesis(const std::string& s) {
  std::stack<char> p;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
      p.push(s[i]);
    } else if (s[i] == ')' && !p.empty() && p.top() == '(') {
      p.pop();

    }
     else if (s[i] == '}' && !p.empty() && p.top() == '{') {
      p.pop();
    } else if (s[i] == ']' && !p.empty() && p.top() == '[') {
      p.pop();
    } else {
      return false;
    }
  }

  return p.empty();
}
