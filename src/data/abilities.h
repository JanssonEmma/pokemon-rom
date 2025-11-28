const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Duftnote"),.description = COMPOUND_STRING("Lässt den Gegner durch Gestank zurückschrecken."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Niesel"),.description = COMPOUND_STRING("Ruft im Kampf Regen herbei."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Temposchub"),.description = COMPOUND_STRING("Erhöht Initiative nach und nach."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Kampfpanzer"),.description = COMPOUND_STRING("Wehrt gegnerische Volltreffer ab."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Robustheit"),.description = COMPOUND_STRING("Bietet Schutz gegen K.O.-Treffer."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Feuchtigkeit"),.description = COMPOUND_STRING("Hält alle Pokémon davon ab, zu explodieren."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Flexibilität"),
        .description = COMPOUND_STRING("Verhindert Paralyse."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sandschleier"),.description = COMPOUND_STRING("Erhöht in Sandstürmen den Fluchtwert."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Statik"),.description = COMPOUND_STRING("Kann bei Berührung paralysieren."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Voltabsorber"),.description = COMPOUND_STRING("Treffer durch Elektro-Attacken regenerieren KP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("H2O-Absorber"),.description = COMPOUND_STRING("Treffer durch Wasser-Attacken regenerieren KP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Dösigkeit"),
        .description = COMPOUND_STRING("Verhindert Anziehung."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Wolke Sieben"),.description = COMPOUND_STRING("Hebt Wetter-Effekte auf."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Facettenauge"),.description = COMPOUND_STRING("Steigert die Genauigkeit von Attacken."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),.description = COMPOUND_STRING("Verhindert Einschlafen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Farbwechsel"),.description = COMPOUND_STRING("Ändert seinen Typ zu dem der Attacke des Angreifers."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunität"),
        .description = COMPOUND_STRING("Verhindert Vergiftung."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Feuerfänger"),
        .description = COMPOUND_STRING("Verstärkt Feuer-A., wenn v. Feuer-A. getroffen."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Puderabwehr"),.description = COMPOUND_STRING("Blockiert Zusatz-Effekte gegnerischer Angriffe."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Gleichmut"),.description = COMPOUND_STRING("Verhindert Verwirrung."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Saugnapf"),.description = COMPOUND_STRING("Blockt Attacken und Items, die Pokémon austauschen."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Bedroher"),.description = COMPOUND_STRING("Senkt Angriff des Gegners."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Wegsperre"),.description = COMPOUND_STRING("Hindert Gegner an der Flucht."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rauhaut"),.description = COMPOUND_STRING("Verletzt Angreifer bei Berührung."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wunderwache"),.description = COMPOUND_STRING("Nur sehr effektive Treffer richten Schaden an."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Schwebe"),.description = COMPOUND_STRING("Volle Immunität gegen alle Boden-Attacken."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Sporenwirt"),.description = COMPOUND_STRING("Kann bei Kontakt Paralyse, Vergiftung oder Schlaf auslösen."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchro"),.description = COMPOUND_STRING("Brand, Gift oder Paralyse ereilen auch den Verursacher."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Neutraltorso"),.description = COMPOUND_STRING("Hindert Angreifer daran, Statuswerte zu senken."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Innere Kraft"),.description = COMPOUND_STRING("Heilt bei Austausch Statusprobleme."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Blitzfänger"),
        .description = COMPOUND_STRING("Zieht Elektro-Attacken an."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Edelmut"),.description = COMPOUND_STRING("Erhöht Chance auf Zusatz-Effekte."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Wassertempo"),.description = COMPOUND_STRING("Steigert bei Regen die Initiative."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),.description = COMPOUND_STRING("Steigert bei Sonnenschein die Initiative."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Erleuchtung"),.description = COMPOUND_STRING("Erhöht die Wahrscheinlichkeit, wilden Pokémon zu begegnen."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Erfassen"),.description = COMPOUND_STRING("Das Pokémon kopiert die Fähigkeit des Gegners."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Kraftkoloss"),
        .description = COMPOUND_STRING("Erhöht Angriff."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Giftdorn"),.description = COMPOUND_STRING("Vergiftet den Angreifer eventuell bei Berührung."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Konzentrator"),.description = COMPOUND_STRING("Verhindert Zurückschrecken."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magmapanzer"),.description = COMPOUND_STRING("Verhindert Einfrieren."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Aquahülle"),
        .description = COMPOUND_STRING("Verhindert Verbrennen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnetfalle"),.description = COMPOUND_STRING("Hindert Stahl-Pokémon an der Flucht."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Lärmschutz"),
        .description = COMPOUND_STRING("Verhindert Schall-Attacken."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Regengenuss"),.description = COMPOUND_STRING("Stellt bei Regen langsam und stetig KP wieder her."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sandsturm"),
        .description = COMPOUND_STRING("Ruft Sandsturm herbei."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Erzwinger"),.description = COMPOUND_STRING("Steigert den AP-Verbrauch des Gegners."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Speckschicht"),.description = COMPOUND_STRING("Stark gegen Attacken der Typen Feuer und Eis."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Frühwecker"),
        .description = COMPOUND_STRING("Wacht schnell auf."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flammkörper"),
        .description = COMPOUND_STRING("Verbrennt Gegner bei Kontakt."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Angsthase"),.description = COMPOUND_STRING("Die Flucht vor wilden Pokémon gelingt immer."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Adlerauge"),.description = COMPOUND_STRING("Hindert Angreifer daran, die Genauigkeit zu senken."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Scherenmacht"),.description = COMPOUND_STRING("Hindert Angreifer daran, den Angriffs-Wert zu senken."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Mitnahme"),.description = COMPOUND_STRING("Hebt gelegentlich Items auf."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Schnarchnase"),.description = COMPOUND_STRING("Greift nur alle zwei Runden an."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Übereifer"),.description = COMPOUND_STRING("Erhöht den Angriffs-Wert, aber senkt die Genauigkeit."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Charmebolzen"),.description = COMPOUND_STRING("Kann bei Kontakt betörend wirken."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),.description = COMPOUND_STRING("Erhöht den Spezial-Angriff, wenn das Pokémon einen Mitstreiter mit der Fähigkeit Plus oder Minus hat."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),.description = COMPOUND_STRING("Erhöht den Spezial-Angriff, wenn das Pokémon einen Mitstreiter mit der Fähigkeit Plus oder Minus hat."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Prognose"),.description = COMPOUND_STRING("Formeo verändert seine Form abhängig vom Wetter."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Klebekörper"),
        .description = COMPOUND_STRING("Verhindert stehlen von Items."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Expidermis"),.description = COMPOUND_STRING("Das Pokémon heilt eventuell seine Statusprobleme."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Adrenalin"),.description = COMPOUND_STRING("Steigert bei Statusproblemen den Angriffs-Wert."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Notschutz"),.description = COMPOUND_STRING("Steigert bei Statusproblemen die Verteidigung."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Kloakensoße"),
        .description = COMPOUND_STRING("Schadet Gegnern, die Saug-Attacken einsetzen."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Notdünger"),
        .description = COMPOUND_STRING("Verstärkt Gras-Attacken in der Not."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Großbrand"),
        .description = COMPOUND_STRING("Verstärkt Feuer-Attacken in der Not."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Sturzbach"),.description = COMPOUND_STRING("Erhöht in Notfällen die Stärke von Wasser-Attacken."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Hexaplaga"),.description = COMPOUND_STRING("Erhöht in Notfällen die Stärke von Käfer-Attacken."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Steinhaupt"),.description = COMPOUND_STRING("Verhindert Schaden, der durch Rückstoß entsteht."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Dürre"),
        .description = COMPOUND_STRING("Erzeugt im Kampf gleißendes Sonnenlicht."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Ausweglos"),.description = COMPOUND_STRING("Hindert den Gegner im Kampf an der Flucht."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Munterkeit"),.description = COMPOUND_STRING("Verhindert Einschlafen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("Pulverrauch"),.description = COMPOUND_STRING("Hindert Angreifer daran, Statuswerte zu senken."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Mentalkraft"),.description = COMPOUND_STRING("Stärkt physische Attacken."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Panzerhaut"),.description = COMPOUND_STRING("Wehrt gegnerische Volltreffer ab."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Klimaschutz"),.description = COMPOUND_STRING("Hebt Wetter-Effekte auf."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Taumelschritt"),.description = COMPOUND_STRING("Erhöht den Fluchtwert, wenn das Pokémon verwirrt ist."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Starthilfe"),.description = COMPOUND_STRING("Erhöht nach einem Treffer durch eine Elektro-Attacke die Initiative."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalität"),
        .description = COMPOUND_STRING("Erhöht Schaden, wenn Ziel dasselbe Geschlecht hat."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Felsenfest"),.description = COMPOUND_STRING("Erhöht die Initiative, sobald das Pokémon zurückschreckt."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Schneemantel"),.description = COMPOUND_STRING("Erhöht bei Hagel den Fluchtwert."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Völlerei"),
        .description = COMPOUND_STRING("Isst beeren früher."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Kurzschluss"),.description = COMPOUND_STRING("Maximiert nach Einstecken eines Volltreffers den Angriffs-Wert."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Entlastung"),.description = COMPOUND_STRING("Erhöht Initiative, wenn ein Item verwendet oder verloren wird."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Hitzeschutz"),.description = COMPOUND_STRING("Senkt die Stärke von Feuer-Attacken."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Wankelmut"),.description = COMPOUND_STRING("Verdoppelt die Wirkung eigener Statusveränderungen."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Trockenheit"),.description = COMPOUND_STRING("Bei heißem Wetter verliert das Pokémon KP. Wasser heilt KP."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),.description = COMPOUND_STRING("Passt Kraft entsprechend den gegnerischen Statuswerten an."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Eisenfaust"),.description = COMPOUND_STRING("Steigert die Effektivität von Box- und Hieb-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Giftheilung"),.description = COMPOUND_STRING("Heilt bei Vergiftungen KP."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Anpassung"),.description = COMPOUND_STRING("Erhöht die Stärke von Attacken desselben Typs."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Wertelink"),.description = COMPOUND_STRING("Ermöglicht längere Trefferserien mit Serien-Attacken."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),.description = COMPOUND_STRING("Heilt bei Regen Statusprobleme."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solarkraft"),.description = COMPOUND_STRING("Führt bei Sonne zu KP-Verlusten, erhöht aber den Spezial-Angriff."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Rasanz"),.description = COMPOUND_STRING("Erhöht bei Statusproblemen die Initiative."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Regulierung"),.description = COMPOUND_STRING("Alle Attacken des Pokémon werden zu Normal-Attacken."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Superschütze"),
        .description = COMPOUND_STRING("Verstärkt kritische Treffer."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magieschild"),.description = COMPOUND_STRING("Das Pokémon nimmt nur durch Offensiv-Attacken Schaden."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("Schildlos"),.description = COMPOUND_STRING("Alle Attacken des oder auf das Pokémon gelingen."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Zeitspiel"),.description = COMPOUND_STRING("Handelt auch mit Initiative-Vorteil stets nach dem Gegner."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Techniker"),.description = COMPOUND_STRING("Steigert die Effektivität von schwächeren Attacken."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Floraschild"),.description = COMPOUND_STRING("Verhindert bei Sonnenschein Statusprobleme."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Tollpatsch"),.description = COMPOUND_STRING("Das Pokémon kann keine getragenen Items verwenden."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Überbrückung"),
        .description = COMPOUND_STRING("Attacken können ungeachtet der Fähigkeiten verwendet werden. ."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Glückspilz"),
        .description = COMPOUND_STRING("Erhöht Chance auf Volltreffer."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Finalschlag"),.description = COMPOUND_STRING("Fügt einem Angreifer, der das Pokémon besiegt, Schaden zu."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Vorahnung"),.description = COMPOUND_STRING("Ahnt gefährliche Attacken des Gegners voraus."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Vorwarnung"),.description = COMPOUND_STRING("Gibt Auskunft über das Attacken-Repertoire des Gegners."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unkenntnis"),.description = COMPOUND_STRING("Ignoriert Statusveränderungen des Ziels."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Aufwertung"),.description = COMPOUND_STRING("Verstärkt nicht sehr effektive Attacken."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),.description = COMPOUND_STRING("Senkt die Stärke sehr effektiver Attacken."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Saumselig"),.description = COMPOUND_STRING("Halbiert zeitweilig den Angriff und die Initiative."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Rauflust"),.description = COMPOUND_STRING("Normal- und Kampf-Attacken treffen Pokémon vom Typ Geist."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Sturmsog"),.description = COMPOUND_STRING("Absorbiert Wasser-Attacken und steigert den Spezial-Angriff."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Eishaut"),.description = COMPOUND_STRING("Regeneriert bei Hagel nach und nach KP."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Felskern"),.description = COMPOUND_STRING("Senkt die Stärke sehr effektiver Attacken."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Schneeschauer"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Pokémon beschwört einen Hagelsturm herauf."),
    #else
        .description = COMPOUND_STRING("Pokémon beschwört einen Hagelsturm herauf."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Honigmaul"),.description = COMPOUND_STRING("Das Pokémon sammelt gelegentlich Honig auf."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Schnüffler"),
        .description = COMPOUND_STRING("Sieht Item vom Gegner."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Achtlos"),.description = COMPOUND_STRING("Verstärkt Attacken mit Rückstoß-Schaden."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Variabilität"),
        .description = COMPOUND_STRING("Passt seinen Typ der getragenen Tafel an."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Pflanzengabe"),.description = COMPOUND_STRING("Erhöht bei Sonnenschein den Angriff und die Spezial-Verteidigung aller Team-Pokémon."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Alptraum"),.description = COMPOUND_STRING("Senkt die KP eines schlafenden Gegners."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Langfinger"),.description = COMPOUND_STRING("Stiehlt Angreifern Items, wenn es von ihnen berührt wird."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Rohe Gewalt"),.description = COMPOUND_STRING("Bewirkt einen Kraftschub, aber hebt Zusatz-Effekte auf."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Umkehrung"),.description = COMPOUND_STRING("Statusveränderungen werden umgekehrt."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Anspannung"),.description = COMPOUND_STRING("Hindert den Gegner durch Stress am Beerenkonsum."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Siegeswille"),.description = COMPOUND_STRING("Senkt der Gegner die Statuswerte, steigt der Angriffs-Wert."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Schwächling"),
        .description = COMPOUND_STRING("Bei halbierter KP-Anzahl sinken die Statuswerte."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Tastfluch"),.description = COMPOUND_STRING("Blockiert gelegentlich Attacken."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Heilherz"),.description = COMPOUND_STRING("Befreit Mitstreiter gelegentlich von Statusproblemen."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Freundeshut"),.description = COMPOUND_STRING("Verringert den Schaden an Mitstreitern."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Bruchrüstung"),
        .description = COMPOUND_STRING("Phys. Treffer senken Verteidigung und steigern Initiative."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Schwermetall"),.description = COMPOUND_STRING("Verdoppelt das eigene Gewicht."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Leichtmetall"),.description = COMPOUND_STRING("Halbiert das eigene Gewicht."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multischuppe"),.description = COMPOUND_STRING("Verringert den erlittenen Schaden bei vollen KP."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Giftwahn"),.description = COMPOUND_STRING("Erhöht bei Vergiftung die Stärke von physischen Attacken."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Hitzewahn"),.description = COMPOUND_STRING("Verstärkt bei Verbrennungen die Stärke von Spezial-Attacken."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Reiche Ernte"),.description = COMPOUND_STRING("Dieselbe Beere kann mehrmals verwendet werden."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathie"),.description = COMPOUND_STRING("Erkennt und pariert Attacken von Mitstreitern."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Gefühlswippe"),
        .description = COMPOUND_STRING("Erhöht einen Statuswert und senkt einen anderen."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Partikelschutz"),.description = COMPOUND_STRING("Nimmt keinen Schaden durch Wetterbedingungen."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Giftgriff"),.description = COMPOUND_STRING("Kann das Ziel durch bloßes Berühren vergiften."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Belebekraft"),.description = COMPOUND_STRING("Heilt beim Austauschen eine geringe Menge an KP."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Brustbieter"),.description = COMPOUND_STRING("Hindert Angreifer daran, die Verteidigung zu senken."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sandscharrer"),.description = COMPOUND_STRING("Erhöht in Sandstürmen die Initiative."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wunderhaut"),.description = COMPOUND_STRING("Wehrt mit robustem Körper viele Status-Attacken ab."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analyse"),.description = COMPOUND_STRING("Greift das Pokémon zuletzt an, ist es stärker."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Trugbild"),.description = COMPOUND_STRING("Bestreitet Kämpfe in der Gestalt des Listenletzten."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Doppelgänger"),
        .description = COMPOUND_STRING("Verwandelt sich in den Gegner."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Schwebedurch"),.description = COMPOUND_STRING("Überwindet gegnerische Schilde und greift an."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mumie"),.description = COMPOUND_STRING("Berührt man das Pokémon, übernimmt man seine Fähigkeit."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Hochmut"),.description = COMPOUND_STRING("Besiegt es ein Pokémon, steigt sein Angriffs-Wert."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Redlichkeit"),.description = COMPOUND_STRING("Angriff steigt nach Einstecken einer Unlicht-Attacke."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Hasenfuß"),
        .description = COMPOUND_STRING("Aus Angst vor manchen Attacken steigt die Initiative."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magiespiegel"),.description = COMPOUND_STRING("Lenkt Status-Attacken auf den Angreifer um."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Vegetarier"),.description = COMPOUND_STRING("Absorbiert Pflanzen-Attacken und steigert den Angriff."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Strolch"),.description = COMPOUND_STRING("Ermöglicht einen Erstschlag mit Status-Attacken."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sandgewalt"),.description = COMPOUND_STRING("Manche Attacken wirken in Sandstürmen besser."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Eisenstachel"),.description = COMPOUND_STRING("Angreifer nehmen durch bloßes Berühren Schaden."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Trance-Modus"),.description = COMPOUND_STRING("Wechselt seine Gestalt, wenn es eng wird."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Triumphstern"),.description = COMPOUND_STRING("Erhöht die Genauigkeit aller Team-Pokémon."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turbobrand"),.description = COMPOUND_STRING("Attacken können ungeachtet der Fähigkeit verwendet werden."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),.description = COMPOUND_STRING("Attacken können ungeachtet der Fähigkeit verwendet werden."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("DuftHülle"),
        .description = COMPOUND_STRING("Schützt alle Pokémon im Team vor manchen mentalen Angriffen."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Blütenhülle"),
        .description = COMPOUND_STRING("Schützt Mitstreiter vom Typ Pflanze vor dem Senken ihrer Statuswerte sowie vor Statusproblemen."),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Backentaschen"),.description = COMPOUND_STRING("Heilt beim Konsum von Beeren KP."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Wandlungskunst"),.description = COMPOUND_STRING("Das Pokémon nimmt bei Einsatz einer Attacke deren Typ an."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fellkleid"),.description = COMPOUND_STRING("Halbiert den Schaden durch physische Attacken."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Zauberer"),.description = COMPOUND_STRING("Stiehlt Items von Pokémon, die durch Attacken getroffen wurden."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Kugelsicher"),.description = COMPOUND_STRING("Schützt das Pokémon vor geworfenen Bomben und Kugeln."),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Unbeugsamkeit"),.description = COMPOUND_STRING("Erhöht den Spezial-Angriff, wenn ein Statuswert gesenkt wurde."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Titankiefer"),.description = COMPOUND_STRING("Der kräftige Kiefer des Pokémon verleiht ihm einen starken Biss."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Frostschicht"),.description = COMPOUND_STRING("Attacken vom Typ Normal nehmen den Typ Eis an."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Zuckerhülle"),
        .description = COMPOUND_STRING("Beschützt Team vor einschlafen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Taktikwechsel"),.description = COMPOUND_STRING("Das Pokémon nimmt je nach Kampftaktik eine andere Form an."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Orkanschwingen"),.description = COMPOUND_STRING("Ermöglicht es dem Pokémon, mit Flug-Attacken zuerst anzugreifen."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Megawumme"),.description = COMPOUND_STRING("Erhöht die Stärke einiger Wellen-, Aura- und Puls-Attacken."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Pflanzenpelz"),.description = COMPOUND_STRING("Erhöht die Verteidigung, wenn Grasfeld aktiv ist."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Symbiose"),.description = COMPOUND_STRING("Das Pokémon kann sein Item an einen Mitstreiter weitergeben."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Krallenwucht"),.description = COMPOUND_STRING("Erhöht die Stärke von direkten Angriffen."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Feenschicht"),.description = COMPOUND_STRING("Attacken vom Typ Normal nehmen den Typ Fee an."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Viskosität"),
        .description = COMPOUND_STRING("Verringert Geschwindigkeit bei Kontakt."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Zenithaut"),.description = COMPOUND_STRING("Attacken vom Typ Normal nehmen den Typ Flug an."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Familienbande"),
        .description = COMPOUND_STRING("Attacken treffen Doppelt."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dunkelaura"),.description = COMPOUND_STRING("Erhöht die Stärke aller Attacken des Typs Unlicht."),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Feenaura"),.description = COMPOUND_STRING("Erhöht die Stärke aller Attacken des Typs Fee."),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura-Umkehr"),.description = COMPOUND_STRING("Kehrt die Wirkung von Auren um."),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Urmeer"),.description = COMPOUND_STRING("Ändert das Wetter, um Feuer-Attacken wirkungslos zu machen."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Endland"),.description = COMPOUND_STRING("Ändert das Wetter, um Wasser-Attacken wirkungslos zu machen."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta-Wind"),.description = COMPOUND_STRING("Ändert das Wetter, um die Schwächen des Typs Flug zu beseitigen."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Zähigkeit"),
        .description = COMPOUND_STRING("Erhöht Verteidigung wenn getroffen."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Reißaus"),
        .description = COMPOUND_STRING("Flieht bei halben KP."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("Rückzug"),
        .description = COMPOUND_STRING("Flieht bei halben KP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Verklumpen"),.description = COMPOUND_STRING("Wird es von einer Wasser-Attacke getroffen, steigt seine Verteidigung stark."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Quälerei"),
        .description = COMPOUND_STRING("Vergiftete Gegner werden kritisch getroffen."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Limitschild"),.description = COMPOUND_STRING("Fallen seine KP auf die Hälfte des Maximalwerts oder weniger, zerbricht die Panzerung des Pokémon und es wird aggressiver."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Beschattung"),.description = COMPOUND_STRING("Bewirkt bei Angriffen auf neu eingewechselte Ziele doppelten Schaden."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Wasserblase"),.description = COMPOUND_STRING("Feuer-Attacken fügen dem Pokémon weniger Schaden zu. Verhindert Verbrennungen."),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Stahlprofi"),.description = COMPOUND_STRING("Erhöht die Stärke von Stahl-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Wutausbruch"),.description = COMPOUND_STRING("Fallen seine KP nach einem Angriff auf die Hälfte des Maximalwerts oder weniger, steigt sein Spezial-Angriff."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Schneescharrer"),.description = COMPOUND_STRING("Erhöht bei Hagel die Initiative."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Langstrecke"),.description = COMPOUND_STRING("Ermöglicht dem Pokémon den Einsatz aller seiner Attacken, ohne das Ziel dabei direkt zu berühren."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Plätscherstimme"),
        .description = COMPOUND_STRING("Bewirkt, dass alle Lärm-Attacken des Pokémon den Typ Wasser annehmen."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Heilwandel"),.description = COMPOUND_STRING("Ermöglicht einen Erstschlag mit Attacken, welche die KP des Anwenders direkt regenerieren."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Elektrohaut"),.description = COMPOUND_STRING("Attacken vom Typ Normal nehmen den Typ Elektro an und ihre Stärke erhöht sich ein wenig."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surf-Schweif"),.description = COMPOUND_STRING("Verdoppelt die Initiative, wenn zuvor ein Elektrofeld erzeugt wurde."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Fischschwarm"),.description = COMPOUND_STRING("Verfügt es über einen hohen KP-Wert, wird es zu einem Schwarm und gewinnt an Stärke. Ist der KP-Wert niedrig, löst sich der Schwarm wieder auf."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Kostümspuk"),
        .description = COMPOUND_STRING("Wehrt einmal im Kampf einen Angriff ab."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Freundschaftsakt"),.description = COMPOUND_STRING("Besiegt es ein Ziel, vertieft dies die Freundschaft zu seinem Trainer, wodurch es die Ash-Form annimmt und sein Wasser-Shuriken stärker wird."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("Scharwandel"),.description = COMPOUND_STRING("Fallen seine KP auf die Hälfte des Maximalwerts oder weniger, eilen ihm weitere Zellen zu Hilfe und es nimmt die Optimumform an."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Korrosion"),.description = COMPOUND_STRING("Kann selbst Pokémon vom Typ Stahl oder Gift vergiften."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Dauerschlaf"),.description = COMPOUND_STRING("Das Pokémon befindet sich ununterbrochen im Halbschlaf und wacht nie vollständig auf. Es kann jedoch im Schlaf angreifen."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("Majestät"),
        .description = COMPOUND_STRING("Beschützt vor Priorität-Attacken"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Magenkrempler"),.description = COMPOUND_STRING("Wird es durch eine Attacke besiegt, fügt es dem Angreifer Schaden in Höhe des KP-Werts zu, den es besaß, bevor es kampfunfähig wurde."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Tänzer"),
        .description = COMPOUND_STRING("Kann direkt im Anschluss an die Tanz-Attacke eines anderen Pokémon ebenfalls eine solche einsetzen."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Batterie"),.description = COMPOUND_STRING("Erhöht die Stärke der Spezial-Attacken seiner Mitstreiter."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Flauschigkeit"),.description = COMPOUND_STRING("Halbiert den Schaden, den es durch direkte Attacken nimmt, aber verdoppelt dafür den durch Feuer-Attacken erlittenen Schaden."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Buntkörper"),
        .description = COMPOUND_STRING("Beschützt vor Priorität-Attacken"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Seelenherz"),.description = COMPOUND_STRING("Erhöht jedes Mal, wenn ein Pokémon besiegt wird, den eigenen Spezial-Angriff."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Lockenkopf"),.description = COMPOUND_STRING("Senkt bei Berührung im Zuge eines Angriffs die Initiative des Angreifers."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),.description = COMPOUND_STRING("Wird einer seiner Mitstreiter besiegt, erhält es dessen Fähigkeit."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Chemiekraft"),
        .description = COMPOUND_STRING("Kopiert Fähigkeit von Partner."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Bestien-Boost"),.description = COMPOUND_STRING("Erhöht in jeder Runde, in der es ein anderes Pokémon besiegt, seinen höchsten Statuswert."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("Alpha-System"),.description = COMPOUND_STRING("Das Pokémon passt seinen Typ der getragenen Disc an."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("Elektro-Erzeuger"),.description = COMPOUND_STRING("Erzeugt bei Kampfantritt ein Elektrofeld."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Psycho-Erzeuger"),.description = COMPOUND_STRING("Erzeugt bei Kampfantritt ein Psychofeld."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Nebel-Erzeuger"),.description = COMPOUND_STRING("Erzeugt bei Kampfantritt ein Nebelfeld."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Gras-Erzeuger"),.description = COMPOUND_STRING("Erzeugt bei Kampfantritt ein Grasfeld."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("Metallprotektor"),.description = COMPOUND_STRING("Verhindert das Senken der Statuswerte durch Attacken und Fähigkeiten."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Phantomschutz"),.description = COMPOUND_STRING("Verringert den erlittenen Schaden bei vollen KP."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prismarüstung"),
        .description = COMPOUND_STRING("Verringert Supereffektiven Schaden."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Zerebralmacht"),.description = COMPOUND_STRING("Erhöht die Stärke von sehr effektiven Attacken."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Kühnes Schwert"),
        .description = COMPOUND_STRING("Erhöht Angriff bei Kampfbeginn."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Wackerer Schild"),.description = COMPOUND_STRING("Erhöht bei Kampfantritt die Verteidigung."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),.description = COMPOUND_STRING("Das Pokémon nimmt bei Einsatz einer Attacke deren Typ an."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Apport"),.description = COMPOUND_STRING("Trägt das Pokémon kein Item bei sich, hebt es den Ball aus dem ersten gescheiterten Fangversuch des Kampfes wieder auf."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Wollflaum"),.description = COMPOUND_STRING("Wird es von einem Angriff getroffen, verstreut es Teile seines Wollflaums, wodurch die Initiative aller anderen Pokémon sinkt."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Schraubflosse"),.description = COMPOUND_STRING("Ignoriert die Effekte von Fähigkeiten und Attacken anderer Pokémon, die Attacken auf sich lenken."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Spiegelrüstung"),
        .description = COMPOUND_STRING("Reflektiert Status-Verringerungen."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Würggeschoss"),
        .description = COMPOUND_STRING("Falls getroffen spuckt es Seebeute aus"),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Stahlrückgrat"),
        .description = COMPOUND_STRING("Ignoriert die Effekte von Fähigkeiten und Attacken anderer Pokémon, die Attacken auf sich lenken."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Dampfantrieb"),.description = COMPOUND_STRING("Wird es von einer Wasser- oder Feuer-Attacke getroffen, steigt seine Initiative drastisch."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),.description = COMPOUND_STRING("Erhöht die Stärke von eigenen Lärm-Attacken und halbiert den Schaden, den das Pokémon selbst durch Lärm-Attacken erleidet."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sandspeier"),.description = COMPOUND_STRING("Löst einen Sandsturm aus, wenn das Pokémon von einer Attacke erfasst wird."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Eisflügelstaub"),
        .description = COMPOUND_STRING("Halbiert Spezial-Schaden."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Heranreifen"),.description = COMPOUND_STRING("Verdoppelt den Effekt von Beeren, indem es sie heranreifen lässt."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Tiefkühlkopf"),
        .description = COMPOUND_STRING("Eisblock blockt eine Attacke. Wird durch Hagel erneuert"),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Kraftquelle"),.description = COMPOUND_STRING("Erhöht bei direkt benachbarten Pokémon die Stärke von Attacken."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimese"),.description = COMPOUND_STRING("Der Typ des Pokémon ändert sich in Abhängigkeit vom Zustand des Feldes."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("Hemmungslos"),.description = COMPOUND_STRING("Hebt bei Kampfantritt die Wirkung von Lichtschild, Reflektor und Auroraschleier auf Mitstreiter- und Gegnerseite auf."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Stählerner Wille"),
        .description = COMPOUND_STRING("Erhöht Stahl-Angriff von Partner."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Unheilskörper"),
        .description = COMPOUND_STRING("Gegner stirbt in 3 Runden, wenn getroffen."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Rastlose Seele"),.description = COMPOUND_STRING("Wird das Pokémon von einer direkten Attacke getroffen, tauscht es seine Fähigkeit mit der des Angreifers."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Affenfokus"),.description = COMPOUND_STRING("Erhöht den Angriff, aber nur die zuerst gewählte Attacke kann eingesetzt werden."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Reaktionsgas"),.description = COMPOUND_STRING("Solange ein Pokémon mit der Fähigkeit Reaktionsgas am Kampf beteiligt ist, werden die Fähigkeiten aller anderen Pokémon unterdrückt oder aufgehoben."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastellhülle"),
        .description = COMPOUND_STRING("Beschützt Team vor Vergiftung."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Heißhunger"),
        .description = COMPOUND_STRING("Verändert jede Runde seine Form."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Schnellschuss"),.description = COMPOUND_STRING("Ermöglicht dem Pokémon gelegentlich den Erstschlag."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Verborgene Faust"),.description = COMPOUND_STRING("Wenn das Pokémon eine direkte Attacke einsetzt, trifft diese auch dann, wenn sich das Ziel selbst schützt."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Kuriose Arznei"),.description = COMPOUND_STRING("Das Pokémon versprüht bei Kampfantritt Arznei aus seiner Muschel, die alle Statusveränderungen auf der Mitstreiterseite aufhebt."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),.description = COMPOUND_STRING("Erhöht die Stärke von Elektro-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Drachenkiefer"),.description = COMPOUND_STRING("Erhöht die Stärke von Drachen-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Helles Wiehern"),.description = COMPOUND_STRING("Besiegt es ein Pokémon, stößt es ein frostiges Wiehern aus und erhöht damit seinen Angriff."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Dunkles Wiehern"),.description = COMPOUND_STRING("Besiegt es ein Pokémon, stößt es ein furchteinflößendes Wiehern aus und erhöht damit seinen Spezial-Angriff."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("Reitgespann"),.description = COMPOUND_STRING("Das Pokémon verfügt sowohl über Coronospas Fähigkeit Anspannung als auch über Polaross’ Fähigkeit Helles Wiehern.{{tt|*|Schimmelreiter}}<br />Das Pokémon verfügt sowohl über Coronospas Fähigkeit Anspannung als auch über Phantoross’ Fähigkeit Dunkles Wiehern.{{tt|*|Rappenreiter}}"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("Reitgespann"),.description = COMPOUND_STRING("Das Pokémon verfügt sowohl über Coronospas Fähigkeit Anspannung als auch über Polaross’ Fähigkeit Helles Wiehern.{{tt|*|Schimmelreiter}}<br />Das Pokémon verfügt sowohl über Coronospas Fähigkeit Anspannung als auch über Phantoross’ Fähigkeit Dunkles Wiehern.{{tt|*|Rappenreiter}}"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("Duftschwade"),.description = COMPOUND_STRING("Das Pokémon überträgt bei Berührung die Fähigkeit Duftschwade auf den Angreifer."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Streusaat"),.description = COMPOUND_STRING("Wird das Pokémon von einem Angriff getroffen, erzeugt es ein Grasfeld."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Thermowandel"),.description = COMPOUND_STRING("Wird das Pokémon von einer Feuer-Attacke getroffen, steigt sein Angriff. Außerdem kann es keine Verbrennung erleiden."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Wutpanzer"),.description = COMPOUND_STRING("Fallen die KP des Pokémon durch einen Angriff auf die Hälfte des Maximalwerts oder weniger, sinken Vert. und Sp.-Vert., aber Ang., Sp.-Ang. und Initiative steigen."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Läutersalz"),
        .description = COMPOUND_STRING("Das Pokémon kann dank seines läuternden Salzes keine Statusprobleme erleiden und der durch Geist-Attacken erlittene Schaden wird halbiert."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("Knusperkruste"),
        .description = COMPOUND_STRING("Erhöht Verteidigung, wenn von Feuer getroffen."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Windreiter"),
        .description = COMPOUND_STRING("Erhöht Angriff wenn von Wind getroffen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Wachhund"),
        .description = COMPOUND_STRING("Kann nicht eingeschüchtert werden."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("Steinträger"),
        .description = COMPOUND_STRING("Stärkt Gestein-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Windkraft"),
        .description = COMPOUND_STRING("Wenn von Wind getroffen, steigert nächste Elektro-Attacke."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Superwechsel"),
        .description = COMPOUND_STRING("Nimmt bei wechsel die Heldenform an."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Kommandant"),
        .description = COMPOUND_STRING("Befehle von Heerashai."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Dynamo"),
        .description = COMPOUND_STRING("Lädt sich bei auf wenn es Schaden nimmt."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Paläosynthese"),
        .description = COMPOUND_STRING("Sonne verbessert besten Wert."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Quantenantrieb"),
        .description = COMPOUND_STRING("Im Elektrofeld wird höchster Wert verbessert."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Goldkörper"),
        .description = COMPOUND_STRING("Verhindert Status-Attacken."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("Unheilsgefäß"),
        .description = COMPOUND_STRING("Verringert Spezial-Angriff anderer Pokémon."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("Unheilsschwert"),
        .description = COMPOUND_STRING("Verringert Verteidigung des Gegners."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("Unheilstafeln"),
        .description = COMPOUND_STRING("Verringert gegnerischen Schaden."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("Unheilsjuwelen"),
        .description = COMPOUND_STRING("Verringert gegnerische Sp.Def."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("Orichalkum Pulse"),
        .description = COMPOUND_STRING("Erzeugt gleißendes Sonnenlicht und verstärkt Angriff."),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("Hadronen-Motor"),
        .description = COMPOUND_STRING("Erzeugt Elektrofeld."),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Profiteur"),
        .description = COMPOUND_STRING("Kopiert Statusänderung des Gegners."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Wiederkäuer"),
        .description = COMPOUND_STRING("Isst verwendete Beere erneut."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Scharfkantig"),
        .description = COMPOUND_STRING("Verstärkt Schnitt-Attacken."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("Feldherr"),
        .description = COMPOUND_STRING("Verstärkt Ang. und SpAng. wenn Partner stirbt."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Synchronauftritt"),
        .description = COMPOUND_STRING("Kopiert Statusänderung von Partner."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Giftbelag"),
        .description = COMPOUND_STRING("Wirft giftige stacheln wenn getroffen."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Schweifrüstung"),
        .description = COMPOUND_STRING("Beschützt vor Priorität-Attacken."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Bodenschmaus"),
        .description = COMPOUND_STRING("Isst Boden-Attacken um KP zu heilen."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("Myzelienkraft"),
        .description = COMPOUND_STRING("Status-Attacken treffen immer."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Gastlichkeit"),
        .description = COMPOUND_STRING("Heilt Partner bei Kampfantritt."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Geistiges Auge"),
        .description = COMPOUND_STRING("Genauigkeit kann nicht gesenkt werden. Ignoriert Änderungen von Ausweichwert. Trifft Geist mit Normal und Kampf."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Erhöht Geschwindigkeit"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Erhöht Angriff."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Erhöht Sp.Def."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Erhöht Verteidigung."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Giftkette"),
        .description = COMPOUND_STRING("Attacken können vergiften."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("Süßer Nektar"),
        .description = COMPOUND_STRING("Reduziert Ausweichwert des Gegners."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Tera-Wandel"),
        .description = COMPOUND_STRING("Tera-Form bei Kampfantritt."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Tera-Panzer"),
        .description = COMPOUND_STRING("Bei vollen KP immun gegen Supereffektive Treffer."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("Teraforming Null"),
        .description = COMPOUND_STRING("Eliminiert Wetter und Terrain-Effekte."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("Giftpuppenspiel"),
        .description = COMPOUND_STRING("Verwirrt vergifteten Gegner."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },
};
