#pragma once

class RPCHandler {
public:
    static void onReady(const DiscordUser* connectedUser)
    {
        DiscordRichPresence discordPresence = {};
        discordPresence.details = "Racing retro";
        discordPresence.smallImageKey = "";
        discordPresence.smallImageText = "Mod: github.com/LoulouNoLegend/NieR-Automata_RPC";
        discordPresence.largeImageKey = "logo";
        discordPresence.largeImageText = "Neodori Forever";
        discordPresence.startTimestamp = RPCData::startTime;
        discordPresence.instance = 0;
        Discord_UpdatePresence(&discordPresence);

//#ifdef _DEBUG
//        printf("\nDiscord: connected to user %s#%s - %s\n",
//               connectedUser->username,
//               connectedUser->discriminator,
//               connectedUser->userId);
//#endif
    }
};