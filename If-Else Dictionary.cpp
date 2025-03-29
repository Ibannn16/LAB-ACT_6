// John Ivan L. Mostoles 12-CPE-01
// If-Else Dictionary in C++

#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string word;
        cout << "Search a Word (or type 'exit' to quit): ";
        getline(cin, word);

        if (word == "exit") {
            break;
        } else if (word == "Accismus") {
            cout << "Pretending to be disinterested in something you actually want." << endl;
        } else if (word == "Apricate") {
            cout << "To bask in the sunshine." << endl;
        } else if (word == "Bafflegab") {
            cout << "Confusing or unintelligible jargon." << endl;
        } else if (word == "Bailiwick") {
            cout << "A person's area of expertise or authority." << endl;
        } else if (word == "Cacophony") {
            cout << "A harsh, discordant mixture of sounds." << endl;
        } else if (word == "Clandestine") {
            cout << "Kept secret or done secretively." << endl;
        } else if (word == "Convivial") {
            cout << "Friendly and enjoyable." << endl;
        } else if (word == "Credulity") {
            cout << "A tendency to believe things too readily." << endl;
        } else if (word == "Effervescent") {
            cout << "Bubbly, lively, or enthusiastic." << endl;
        } else if (word == "Ephemeral") {
            cout << "Lasting for a very short time." << endl;
        } else if (word == "Erudite") {
            cout << "Having or showing great knowledge or learning." << endl;
        } else if (word == "Fatuous") {
            cout << "Silly and pointless." << endl;
        } else if (word == "Flibbertigibbet") {
            cout << "A frivolous or flighty person." << endl;
        } else if (word == "Garrulous") {
            cout << "Excessively talkative, especially on trivial matters." << endl;
        } else if (word == "Ineluctable") {
            cout << "Unable to be resisted or avoided." << endl;
        } else if (word == "Insouciant") {
            cout << "Showing a lack of concern." << endl;
        } else if (word == "Lachrymose") {
            cout << "Tearful or given to weeping." << endl;
        } else if (word == "Loquacious") {
            cout << "Tending to talk a great deal; talkative." << endl;
        } else if (word == "Mellifluous") {
            cout << "(of a voice or words) sweet or musical; pleasant to hear." << endl;
        } else if (word == "Obsequious") {
            cout << "Excessively attentive or flattering." << endl;
        } else if (word == "Pauciloquent") {
            cout << "Using few words; terse or concise." << endl;
        } else if (word == "Perspicacious") {
            cout << "Having a ready grasp of things; shrewd or discerning." << endl;
        } else if (word == "Pneumonoultramicroscopicsilicovolcanoconiosis") {
            cout << "A lung disease caused by inhaling very fine silica dust." << endl;
        } else if (word == "Pulchritudinous") {
            cout << "Having great physical beauty." << endl;
        } else if (word == "Quixotic") {
            cout << "Exceedingly idealistic; unrealistic and impractical." << endl;
        } else if (word == "Raconteur") {
            cout << "A person who tells anecdotes in a skillful and amusing way." << endl;
        } else if (word == "Sycophant") {
            cout << "A person who tries to win favor from wealthy or influential people by flattering them." << endl;
        } else if (word == "Tittynope") {
            cout << "A small quantity of anything left over." << endl;
        } else if (word == "Uxorious") {
            cout << "Having or showing an excessive or submissive fondness for one's wife." << endl;
        } else if (word == "Verbiage") {
            cout << "Speech or writing that uses too many words or excessively technical expressions." << endl;
        } else {
            cout << "Word is not on the List!" << endl;
        }
    }

    return 0;
}
