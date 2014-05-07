//#define OS_PRE_DATA_PATH "data/"
//#define OS_POST_DATA_PATH "../../../data/"

#include "ofMain.h"
#include "cyrilApp.h"

map < string, ofColor > colorNameMap;

int main( ){
  // Set this temporarily to load font from packaged Resources
  ofSetDataPathRoot("../Resources/data");
  ofSetEscapeQuitsApp(false);
  
  colorNameMap["white"] = ofColor::white;
  colorNameMap["gray"] = ofColor::gray;
  colorNameMap["black"] = ofColor::black;
  colorNameMap["red"] = ofColor::red;
  colorNameMap["green"] = ofColor::green;
  colorNameMap["blue"] = ofColor::blue;
  colorNameMap["cyan"] = ofColor::cyan;
  colorNameMap["magenta"] = ofColor::magenta;
  colorNameMap["yellow"] = ofColor::yellow;
  colorNameMap["aliceBlue"] = ofColor::aliceBlue;
  colorNameMap["antiqueWhite"] = ofColor::antiqueWhite;
  colorNameMap["aqua"] = ofColor::aqua;
  colorNameMap["aquamarine"] = ofColor::aquamarine;
  colorNameMap["azure"] = ofColor::azure;
  colorNameMap["beige"] = ofColor::beige;
  colorNameMap["bisque"] = ofColor::bisque;
  colorNameMap["blanchedAlmond"] = ofColor::blanchedAlmond;
  colorNameMap["blueViolet"] = ofColor::blueViolet;
  colorNameMap["brown"] = ofColor::brown;
  colorNameMap["burlyWood"] = ofColor::burlyWood;
  colorNameMap["cadetBlue"] = ofColor::cadetBlue;
  colorNameMap["chartreuse"] = ofColor::chartreuse;
  colorNameMap["chocolate"] = ofColor::chocolate;
  colorNameMap["coral"] = ofColor::coral;
  colorNameMap["cornflowerBlue"] = ofColor::cornflowerBlue;
  colorNameMap["cornsilk"] = ofColor::cornsilk;
  colorNameMap["crimson"] = ofColor::crimson;
  colorNameMap["darkBlue"] = ofColor::darkBlue;
  colorNameMap["darkCyan"] = ofColor::darkCyan;
  colorNameMap["darkGoldenRod"] = ofColor::darkGoldenRod;
  colorNameMap["darkGray"] = ofColor::darkGray;
  colorNameMap["darkGrey"] = ofColor::darkGrey;
  colorNameMap["darkGreen"] = ofColor::darkGreen;
  colorNameMap["darkKhaki"] = ofColor::darkKhaki;
  colorNameMap["darkMagenta"] = ofColor::darkMagenta;
  colorNameMap["darkOliveGreen"] = ofColor::darkOliveGreen;
  colorNameMap["darkorange"] = ofColor::darkorange;
  colorNameMap["darkOrchid"] = ofColor::darkOrchid;
  colorNameMap["darkRed"] = ofColor::darkRed;
  colorNameMap["darkSalmon"] = ofColor::darkSalmon;
  colorNameMap["darkSeaGreen"] = ofColor::darkSeaGreen;
  colorNameMap["darkSlateBlue"] = ofColor::darkSlateBlue;
  colorNameMap["darkSlateGray"] = ofColor::darkSlateGray;
  colorNameMap["darkSlateGrey"] = ofColor::darkSlateGrey;
  colorNameMap["darkTurquoise"] = ofColor::darkTurquoise;
  colorNameMap["darkViolet"] = ofColor::darkViolet;
  colorNameMap["deepPink"] = ofColor::deepPink;
  colorNameMap["deepSkyBlue"] = ofColor::deepSkyBlue;
  colorNameMap["dimGray"] = ofColor::dimGray;
  colorNameMap["dimGrey"] = ofColor::dimGrey;
  colorNameMap["dodgerBlue"] = ofColor::dodgerBlue;
  colorNameMap["fireBrick"] = ofColor::fireBrick;
  colorNameMap["floralWhite"] = ofColor::floralWhite;
  colorNameMap["forestGreen"] = ofColor::forestGreen;
  colorNameMap["fuchsia"] = ofColor::fuchsia;
  colorNameMap["gainsboro"] = ofColor::gainsboro;
  colorNameMap["ghostWhite"] = ofColor::ghostWhite;
  colorNameMap["gold"] = ofColor::gold;
  colorNameMap["goldenRod"] = ofColor::goldenRod;
  colorNameMap["grey"] = ofColor::grey;
  colorNameMap["greenYellow"] = ofColor::greenYellow;
  colorNameMap["honeyDew"] = ofColor::honeyDew;
  colorNameMap["hotPink"] = ofColor::hotPink;
  colorNameMap["indianRed "] = ofColor::indianRed ;
  colorNameMap["indigo "] = ofColor::indigo ;
  colorNameMap["ivory"] = ofColor::ivory;
  colorNameMap["khaki"] = ofColor::khaki;
  colorNameMap["lavender"] = ofColor::lavender;
  colorNameMap["lavenderBlush"] = ofColor::lavenderBlush;
  colorNameMap["lawnGreen"] = ofColor::lawnGreen;
  colorNameMap["lemonChiffon"] = ofColor::lemonChiffon;
  colorNameMap["lightBlue"] = ofColor::lightBlue;
  colorNameMap["lightCoral"] = ofColor::lightCoral;
  colorNameMap["lightCyan"] = ofColor::lightCyan;
  colorNameMap["lightGoldenRodYellow"] = ofColor::lightGoldenRodYellow;
  colorNameMap["lightGray"] = ofColor::lightGray;
  colorNameMap["lightGrey"] = ofColor::lightGrey;
  colorNameMap["lightGreen"] = ofColor::lightGreen;
  colorNameMap["lightPink"] = ofColor::lightPink;
  colorNameMap["lightSalmon"] = ofColor::lightSalmon;
  colorNameMap["lightSeaGreen"] = ofColor::lightSeaGreen;
  colorNameMap["lightSkyBlue"] = ofColor::lightSkyBlue;
  colorNameMap["lightSlateGray"] = ofColor::lightSlateGray;
  colorNameMap["lightSlateGrey"] = ofColor::lightSlateGrey;
  colorNameMap["lightSteelBlue"] = ofColor::lightSteelBlue;
  colorNameMap["lightYellow"] = ofColor::lightYellow;
  colorNameMap["lime"] = ofColor::lime;
  colorNameMap["limeGreen"] = ofColor::limeGreen;
  colorNameMap["linen"] = ofColor::linen;
  colorNameMap["maroon"] = ofColor::maroon;
  colorNameMap["mediumAquaMarine"] = ofColor::mediumAquaMarine;
  colorNameMap["mediumBlue"] = ofColor::mediumBlue;
  colorNameMap["mediumOrchid"] = ofColor::mediumOrchid;
  colorNameMap["mediumPurple"] = ofColor::mediumPurple;
  colorNameMap["mediumSeaGreen"] = ofColor::mediumSeaGreen;
  colorNameMap["mediumSlateBlue"] = ofColor::mediumSlateBlue;
  colorNameMap["mediumSpringGreen"] = ofColor::mediumSpringGreen;
  colorNameMap["mediumTurquoise"] = ofColor::mediumTurquoise;
  colorNameMap["mediumVioletRed"] = ofColor::mediumVioletRed;
  colorNameMap["midnightBlue"] = ofColor::midnightBlue;
  colorNameMap["mintCream"] = ofColor::mintCream;
  colorNameMap["mistyRose"] = ofColor::mistyRose;
  colorNameMap["moccasin"] = ofColor::moccasin;
  colorNameMap["navajoWhite"] = ofColor::navajoWhite;
  colorNameMap["navy"] = ofColor::navy;
  colorNameMap["oldLace"] = ofColor::oldLace;
  colorNameMap["olive"] = ofColor::olive;
  colorNameMap["oliveDrab"] = ofColor::oliveDrab;
  colorNameMap["orange"] = ofColor::orange;
  colorNameMap["orangeRed"] = ofColor::orangeRed;
  colorNameMap["orchid"] = ofColor::orchid;
  colorNameMap["paleGoldenRod"] = ofColor::paleGoldenRod;
  colorNameMap["paleGreen"] = ofColor::paleGreen;
  colorNameMap["paleTurquoise"] = ofColor::paleTurquoise;
  colorNameMap["paleVioletRed"] = ofColor::paleVioletRed;
  colorNameMap["papayaWhip"] = ofColor::papayaWhip;
  colorNameMap["peachPuff"] = ofColor::peachPuff;
  colorNameMap["peru"] = ofColor::peru;
  colorNameMap["pink"] = ofColor::pink;
  colorNameMap["plum"] = ofColor::plum;
  colorNameMap["powderBlue"] = ofColor::powderBlue;
  colorNameMap["purple"] = ofColor::purple;
  colorNameMap["rosyBrown"] = ofColor::rosyBrown;
  colorNameMap["royalBlue"] = ofColor::royalBlue;
  colorNameMap["saddleBrown"] = ofColor::saddleBrown;
  colorNameMap["salmon"] = ofColor::salmon;
  colorNameMap["sandyBrown"] = ofColor::sandyBrown;
  colorNameMap["seaGreen"] = ofColor::seaGreen;
  colorNameMap["seaShell"] = ofColor::seaShell;
  colorNameMap["sienna"] = ofColor::sienna;
  colorNameMap["silver"] = ofColor::silver;
  colorNameMap["skyBlue"] = ofColor::skyBlue;
  colorNameMap["slateBlue"] = ofColor::slateBlue;
  colorNameMap["slateGray"] = ofColor::slateGray;
  colorNameMap["slateGrey"] = ofColor::slateGrey;
  colorNameMap["snow"] = ofColor::snow;
  colorNameMap["springGreen"] = ofColor::springGreen;
  colorNameMap["steelBlue"] = ofColor::steelBlue;
  colorNameMap["tan"] = ofColor::tan;
  colorNameMap["teal"] = ofColor::teal;
  colorNameMap["thistle"] = ofColor::thistle;
  colorNameMap["tomato"] = ofColor::tomato;
  colorNameMap["turquoise"] = ofColor::turquoise;
  colorNameMap["violet"] = ofColor::violet;
  colorNameMap["wheat"] = ofColor::wheat;
  colorNameMap["whiteSmoke"] = ofColor::whiteSmoke;
  colorNameMap["yellowGreen"] = ofColor::yellowGreen;
  
  int X_MAX = 640;
  int Y_MAX = 480;
  ofSetupOpenGL(X_MAX, Y_MAX, OF_WINDOW);
  
	ofRunApp(new cyrilApp());
}
