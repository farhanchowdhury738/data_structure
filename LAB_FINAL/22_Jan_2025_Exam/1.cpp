#include <iostream>
#include <string>
using namespace std;

struct Song {
    string title;
    Song* next;
};

class Playlist {

    Song* head;

public:
    Playlist()  {   head = NULL;}

    void addSong(string songTitle) {
        Song* newSong = new Song{songTitle, NULL};
        if (!head) {
            head = newSong;
        } else {
            Song* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newSong;
        }
        cout << "Added: " << songTitle << endl;
    }

    void removeSong(string songTitle) {
        if (!head) {
            cout << "Playlist is empty.\n";
            return;
        }

        if (head->title == songTitle) {
            Song* temp = head;
            head = head->next;
            delete temp;
            cout << "Removed: " << songTitle << endl;
            return;
        }

        Song* current = head;
        while (current->next && current->next->title != songTitle) {
            current = current->next;
        }

        if (current->next) {
            Song* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Removed: " << songTitle << endl;
        } else {
            cout << "Song not found.\n";
        }
    }

    void searchSong(string songTitle) {
        Song* temp = head;
        while (temp) {
            if (temp->title == songTitle) {
                cout << "Song found: " << songTitle << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Song not found.\n";
    }

    void displayPlaylist() {
        if (!head) {
            cout << "Playlist is empty.\n";
            return;
        }

        Song* temp = head;
        cout << "Playlist: ";
        while (temp) {
            cout << temp->title << " ";
            temp = temp->next;
        }
    }


};

int main() {
    Playlist playlist;

    playlist.addSong("Song A");
    playlist.addSong("Song B");
    playlist.addSong("Song C");

    playlist.displayPlaylist();

    playlist.searchSong("Song B");

    playlist.removeSong("Song B");
    playlist.displayPlaylist();

    playlist.searchSong("Song B");

    return 0;
}
