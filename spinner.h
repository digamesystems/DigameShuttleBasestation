//****************************************************************************************
// An "Old-School" UI Element from my DOS days! 
//****************************************************************************************
String rotateSpinner(){
  static String spinner = "|";
  //OLD SCHOOL! :)
  if (spinner == "|") {
    spinner = "/";
  } else if (spinner == "/") {
    spinner = "-";
  } else if (spinner == "-") {
    spinner = "\\";
  } else { 
    spinner = "|";
  }
  return spinner;
}