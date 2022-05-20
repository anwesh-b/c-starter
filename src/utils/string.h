string snakeToCamelCase(string str) {
  string result = "";

  for(int i = 0; i < str.size(); i++) {
    if(str[i] == '_' && i < str.size() - 1) {
      result += toupper(str[i + 1]);
      i++;
    } else {
      result += str[i];
    }
  }

  return result;
}
