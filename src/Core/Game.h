#ifndef GAME_H
#define GAME_H
#include <QString>
#include <QColor>

static const int MinPlayers = 2;
static const int MaxPlayers = 8;
static const quint16 MAKSYMALNA_DLUGOSC_NAZWY = 20; //chodzi o nazwę gracza //TODO CFiend to moze trzeba to nazwac lepiej (-; i pewnie przeniesc do NewGameWindow

static const quint8 DaysPerWeek = 5;

static const uint PlayerDice = 10;

static const quint8 MaximumReputationsToWin = 2; //ile reputacji trzeba wymaksować, żeby wygrać.
static const quint8 MaximumLevel = 10;
static const quint16 GRANICE_POZIOMOW[MaximumLevel] = {0, 500, 1100, 1800, 2600, 3500, 4500, 5600, 6800, 8100};

static const quint8 AttributePointsPerLevel = 3; //TODO CFiend nie jestem pewien czy to wlasciwe tlumaczenie
static const quint8 LICZBA_ATRYBOTOW_DO_AWANSU = 5;
static const quint8 HealthIncreasePerLevel = 3;
static const quint8 MaximumReputation = 5;
static const quint8 HealingPerGoldPiece = 4;

static const quint8 ItemCountInMarket = 6;
static const quint8 QuestsInTavernCount = 3;
static const quint8 MaximumNumberOfQuestsTaken = 5;
static const quint8 QuestDeclineCost = 2;

static const quint8 DZIALANIE_MALYCH_POTOW = 3; //TODO: nieco konfliktuje z danymi w pliku przeciwnicy (trzeba dbać o jednolitość)
static const quint8 CENA_MALEJ_MIKSTURY = 1;
static const quint8 DZIALANIE_DUZYCH_POTOW = 10;
static const quint8 CENA_DUZEJ_MIKSTURY = 3;

static const int CZAS_TRWANIA_JEDNEGO_PRZEJSCIA = 500; //w milisekundach
static const int CZAS_TRWANIA_PODSWIETLENIA = 1500; //w milisekundach
static const int DLUGOSC_TRWANIA_KOMUNIKATU = 4000; //w milisekundach
static const qreal ZMIANA_WIELKOSCI_PLANSZY = 5;
static const qreal InitialTileSize = 20;
static const qreal MAKSYMALNY_ROZMIAR_HEXA = 80;
static const qreal MINIMALNY_ROZMIAR_HEXA = 10;

static const quint8 LICZBA_MOZLIWYCH_KOLOROW = 9;
static const QString MOZLIWE_KOLORY[LICZBA_MOZLIWYCH_KOLOROW] = {
	"Zielony",
	"Czerwony",
	QString::fromUtf8("Żółty"),
	"Niebieski",
	"Czarny",
	QString::fromUtf8("Biały"),
	QString::fromUtf8("Błękitny"),
	"Fioletowy",
	"Szary"
};

static const QColor KOLORY[LICZBA_MOZLIWYCH_KOLOROW]= {
	Qt::green,
	Qt::red,
	Qt::yellow,
	Qt::blue,
	Qt::black,
	Qt::white,
	Qt::cyan,
	Qt::magenta,
	Qt::gray
};

enum atrybut
{
	Awrecz,
	Adystansowy,
	Amagiczny,
	defence,
	perception,
	zdrowie
};

//index nazwy mozliwych atrybutow do awansu jest równoznaczny z wartością enumeratora atrybut
static const QString MOZLIWE_AWANSE[] = {
	QString::fromUtf8("Atak wręcz"),
	"Atak dystansowy",
	"Atak magiczny",
	"Obrona",
	"Percepcja",
};

static const int LICZBA_POZIOMOW_ZADAN = 3;
static const int LICZBA_RODZAJOW_ZADAN = 3;
static const int BAZOWA_SZANSA_NA_ODNALEZIENIE = 50; // w procentach
static const int BONUS_Z_PERCEPCJI = 5; // w procentach

enum Blad
{
	blad_parsera_przedmiotow= 11,
	blad_parsera_nagrod = 12,
	blad_parsera_przeciwnikow = 13,
	blad_liczby_grup_przeciwnikow = 131,
	blad_parsera_zadan = 14,
	blad_liczby_zadan = 141,
	blad_parsera_ustawienia_planszy = 21
};

#endif
