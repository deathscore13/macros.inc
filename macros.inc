/**
 * Макросы для SourceMod 1.10
 * 
 * https://github.com/deathscore13/Macros
 */

#if defined _macros_included
 #endinput
#endif
#define _macros_included

// Приведения значений
// Дефолтные
#define toBool(%1) view_as<bool>(%1)   /**< Приведение типа к bool */
#define toChar(%1) view_as<char>(%1)   /**< Приведение типа к char */
#define toInt(%1) view_as<int>(%1)   /**< Приведение типа к int */
#define toFloat(%1) view_as<float>(%1)   /**< Приведение типа к float */
// admin.inc
#define toAdminFlag(%1) view_as<AdminFlag>(%1)   /**< Приведение типа к AdminFlag */
#define toOverrideType(%1) view_as<OverrideType>(%1)   /**< Приведение типа к OverrideType */
#define toOverrideRule(%1) view_as<OverrideRule>(%1)   /**< Приведение типа к OverrideRule */
#define toImmunityType(%1) view_as<ImmunityType>(%1)   /**< Приведение типа к ImmunityType */
#define toGroupId(%1) view_as<GroupId>(%1)   /**< Приведение типа к GroupId */
#define toAdminId(%1) view_as<AdminId>(%1)   /**< Приведение типа к AdminId */
#define toAdmAccessMode(%1) view_as<AdmAccessMode>(%1)   /**< Приведение типа к AdmAccessMode */
#define toAdminCachePart(%1) view_as<AdminCachePart>(%1)   /**< Приведение типа к AdminCachePart */
#define toAdminId(%1) view_as<AdminId>(%1)   /**< Приведение типа к AdminId */
#define toGroupId(%1) view_as<GroupId>(%1)   /**< Приведение типа к GroupId */
// adt_array.inc
#define toArrayList(%1) view_as<ArrayList>(%1)   /**< Приведение типа к ArrayList */
// adt_stack.inc
#define toArrayStack(%1) view_as<ArrayStack>(%1)   /**< Приведение типа к ArrayStack */
// adt_trie.inc
#define toStringMap(%1) view_as<StringMap>(%1)   /**< Приведение типа к StringMap */
#define toStringMapSnapshot(%1) view_as<StringMapSnapshot>(%1)   /**< Приведение типа к StringMapSnapshot */
// bitbuffer.inc
#define toBfWrite(%1) view_as<BfWrite>(%1)   /**< Приведение типа к BfWrite */
#define toBfRead(%1) view_as<BfRead>(%1)   /**< Приведение типа к BfRead */
// clientprefs.inc
#define toCookieAccess(%1) view_as<CookieAccess>(%1)   /**< Приведение типа к CookieAccess */
#define toCookieMenu(%1) view_as<CookieMenu>(%1)   /**< Приведение типа к CookieMenu */
#define toCookieMenuAction(%1) view_as<CookieMenuAction>(%1)   /**< Приведение типа к CookieMenuAction */
#define toCookieMenuHandler(%1) view_as<CookieMenuHandler>(%1)   /**< Приведение типа к CookieMenuHandler */
#define toCookie(%1) view_as<Cookie>(%1)   /**< Приведение типа к Cookie */
// clients.inc
#define toNetFlow(%1) view_as<NetFlow>(%1)   /**< Приведение типа к NetFlow */
#define toAuthIdType(%1) view_as<AuthIdType>(%1)   /**< Приведение типа к AuthIdType */
// commandfilters.inc
#define toMultiTargetFilter(%1) view_as<MultiTargetFilter>(%1)   /**< Приведение типа к MultiTargetFilter */
// console.inc
#define toQueryCookie(%1) view_as<QueryCookie>(%1)   /**< Приведение типа к QueryCookie */
#define toReplySource(%1) view_as<ReplySource>(%1)   /**< Приведение типа к ReplySource */
#define toSrvCmd(%1) view_as<SrvCmd>(%1)   /**< Приведение типа к SrvCmd */
#define toConCmd(%1) view_as<ConCmd>(%1)   /**< Приведение типа к ConCmd */
#define toCommandIterator(%1) view_as<CommandIterator>(%1)   /**< Приведение типа к CommandIterator */
#define toCommandListener(%1) view_as<CommandListener>(%1)   /**< Приведение типа к CommandListener */
// convars.inc
#define toConVarBounds(%1) view_as<ConVarBounds>(%1)   /**< Приведение типа к ConVarBounds */
#define toConVarQueryResult(%1) view_as<ConVarQueryResult>(%1)   /**< Приведение типа к ConVarQueryResult */
#define toConVarChanged(%1) view_as<ConVarChanged>(%1)   /**< Приведение типа к ConVarChanged */
#define toConVar(%1) view_as<ConVar>(%1)   /**< Приведение типа к ConVar */
#define toConVarQueryFinished(%1) view_as<ConVarQueryFinished>(%1)   /**< Приведение типа к ConVarQueryFinished */
// core.inc
#define toAction(%1) view_as<Action>(%1)   /**< Приведение типа к Action */
#define toIdentity(%1) view_as<Identity>(%1)   /**< Приведение типа к Identity */
#define toPluginStatus(%1) view_as<PluginStatus>(%1)   /**< Приведение типа к PluginStatus */
#define toPluginInfo(%1) view_as<PluginInfo>(%1)   /**< Приведение типа к PluginInfo */
// cstrike.inc
#define toCSRoundEndReason(%1) view_as<CSRoundEndReason>(%1)   /**< Приведение типа к CSRoundEndReason */
#define toCSWeaponID(%1) view_as<CSWeaponID>(%1)   /**< Приведение типа к CSWeaponID */
// datapack.inc
#define toDataPackPos(%1) view_as<DataPackPos>(%1)   /**< Приведение типа к DataPackPos */
#define toDataPack(%1) view_as<DataPack>(%1)   /**< Приведение типа к DataPack */
// dbi.inc
#define toDBResult(%1) view_as<DBResult>(%1)   /**< Приведение типа к DBResult */
#define toDBBindType(%1) view_as<DBBindType>(%1)   /**< Приведение типа к DBBindType */
#define toDBPriority(%1) view_as<DBPriority>(%1)   /**< Приведение типа к DBPriority */
#define toDBDriver(%1) view_as<DBDriver>(%1)   /**< Приведение типа к DBDriver */
#define toDBResultSet(%1) view_as<DBResultSet>(%1)   /**< Приведение типа к DBResultSet */
#define toSQLTxnSuccess(%1) view_as<SQLTxnSuccess>(%1)   /**< Приведение типа к SQLTxnSuccess */
#define toSQLTxnFailure(%1) view_as<SQLTxnFailure>(%1)   /**< Приведение типа к SQLTxnFailure */
#define toTransaction(%1) view_as<Transaction>(%1)   /**< Приведение типа к Transaction */
#define toDBStatement(%1) view_as<DBStatement>(%1)   /**< Приведение типа к DBStatement */
#define toSQLConnectCallback(%1) view_as<SQLConnectCallback>(%1)   /**< Приведение типа к SQLConnectCallback */
#define toSQLQueryCallback(%1) view_as<SQLQueryCallback>(%1)   /**< Приведение типа к SQLQueryCallback */
#define toDatabase(%1) view_as<Database>(%1)   /**< Приведение типа к Database */
#define toSQLTCallback(%1) view_as<SQLTCallback>(%1)   /**< Приведение типа к SQLTCallback */
// dhooks.inc
#define toObjectValueType(%1) view_as<ObjectValueType>(%1)   /**< Приведение типа к ObjectValueType */
#define toListenType(%1) view_as<ListenType>(%1)   /**< Приведение типа к ListenType */
#define toReturnType(%1) view_as<ReturnType>(%1)   /**< Приведение типа к ReturnType */
#define toHookParamType(%1) view_as<HookParamType>(%1)   /**< Приведение типа к HookParamType */
#define toThisPointerType(%1) view_as<ThisPointerType>(%1)   /**< Приведение типа к ThisPointerType */
#define toHookType(%1) view_as<HookType>(%1)   /**< Приведение типа к HookType */
#define toCallingConvention(%1) view_as<CallingConvention>(%1)   /**< Приведение типа к CallingConvention */
#define toHookMode(%1) view_as<HookMode>(%1)   /**< Приведение типа к HookMode */
#define toMRESReturn(%1) view_as<MRESReturn>(%1)   /**< Приведение типа к MRESReturn */
#define toDHookPassFlag(%1) view_as<DHookPassFlag>(%1)   /**< Приведение типа к DHookPassFlag */
#define toDHookRegister(%1) view_as<DHookRegister>(%1)   /**< Приведение типа к DHookRegister */
#define toListenCB(%1) view_as<ListenCB>(%1)   /**< Приведение типа к ListenCB */
#define toDHookRemovalCB(%1) view_as<DHookRemovalCB>(%1)   /**< Приведение типа к DHookRemovalCB */
#define toDHookCallback(%1) view_as<DHookCallback>(%1)   /**< Приведение типа к DHookCallback */
#define toDHookParam(%1) view_as<DHookParam>(%1)   /**< Приведение типа к DHookParam */
#define toDHookReturn(%1) view_as<DHookReturn>(%1)   /**< Приведение типа к DHookReturn */
#define toDHookSetup(%1) view_as<DHookSetup>(%1)   /**< Приведение типа к DHookSetup */
#define toDynamicHook(%1) view_as<DynamicHook>(%1)   /**< Приведение типа к DynamicHook */
#define toDynamicDetour(%1) view_as<DynamicDetour>(%1)   /**< Приведение типа к DynamicDetour */
// entity.inc
#define toPropType(%1) view_as<PropType>(%1)   /**< Приведение типа к PropType */
#define toPropFieldType(%1) view_as<PropFieldType>(%1)   /**< Приведение типа к PropFieldType */
// entity_prop_stocks.inc
#define toMoveType(%1) view_as<MoveType>(%1)   /**< Приведение типа к MoveType */
#define toRenderMode(%1) view_as<RenderMode>(%1)   /**< Приведение типа к RenderMode */
#define toRenderFx(%1) view_as<RenderFx>(%1)   /**< Приведение типа к RenderFx */
// events.inc
#define toEventHookMode(%1) view_as<EventHookMode>(%1)   /**< Приведение типа к EventHookMode */
#define toEventHook(%1) view_as<EventHook>(%1)   /**< Приведение типа к EventHook */
#define toEvent(%1) view_as<Event>(%1)   /**< Приведение типа к Event */
// files.inc
#define toFileType(%1) view_as<FileType>(%1)   /**< Приведение типа к FileType */
#define toFileTimeMode(%1) view_as<FileTimeMode>(%1)   /**< Приведение типа к FileTimeMode */
#define toPathType(%1) view_as<PathType>(%1)   /**< Приведение типа к PathType */
#define toDirectoryListing(%1) view_as<DirectoryListing>(%1)   /**< Приведение типа к DirectoryListing */
#define toFile(%1) view_as<File>(%1)   /**< Приведение типа к File */
// functions.inc
#define toParamType(%1) view_as<ParamType>(%1)   /**< Приведение типа к ParamType */
#define toExecType(%1) view_as<ExecType>(%1)   /**< Приведение типа к ExecType */
#define toGlobalForward(%1) view_as<GlobalForward>(%1)   /**< Приведение типа к GlobalForward */
#define toPrivateForward(%1) view_as<PrivateForward>(%1)   /**< Приведение типа к PrivateForward */
#define toNativeCall(%1) view_as<NativeCall>(%1)   /**< Приведение типа к NativeCall */
#define toRequestFrameCallback(%1) view_as<RequestFrameCallback>(%1)   /**< Приведение типа к RequestFrameCallback */
// halflife.inc
#define toDialogType(%1) view_as<DialogType>(%1)   /**< Приведение типа к DialogType */
#define toEngineVersion(%1) view_as<EngineVersion>(%1)   /**< Приведение типа к EngineVersion */
#define toFindMapResult(%1) view_as<FindMapResult>(%1)   /**< Приведение типа к FindMapResult */
#define toClientRangeType(%1) view_as<ClientRangeType>(%1)   /**< Приведение типа к ClientRangeType */
// handles.inc
#define toHandle(%1) view_as<Handle>(%1)   /**< Приведение типа к Handle */
// keyvalues.inc
#define toKvDataTypes(%1) view_as<KvDataTypes>(%1)   /**< Приведение типа к KvDataTypes */
#define toKeyValues(%1) view_as<KeyValues>(%1)   /**< Приведение типа к KeyValues */
// logging.inc
#define toGameLogHook(%1) view_as<GameLogHook>(%1)   /**< Приведение типа к GameLogHook */
// mapchooser.inc
#define toNominateResult(%1) view_as<NominateResult>(%1)   /**< Приведение типа к NominateResult */
#define toMapChange(%1) view_as<MapChange>(%1)   /**< Приведение типа к MapChange */
// menus.inc
#define toMenuStyle(%1) view_as<MenuStyle>(%1)   /**< Приведение типа к MenuStyle */
#define toMenuAction(%1) view_as<MenuAction>(%1)   /**< Приведение типа к MenuAction */
#define toMenuSource(%1) view_as<MenuSource>(%1)   /**< Приведение типа к MenuSource */
#define toMenuHandler(%1) view_as<MenuHandler>(%1)   /**< Приведение типа к MenuHandler */
#define toPanel(%1) view_as<Panel>(%1)   /**< Приведение типа к Panel */
#define toMenu(%1) view_as<Menu>(%1)   /**< Приведение типа к Menu */
#define toVoteHandler(%1) view_as<VoteHandler>(%1)   /**< Приведение типа к VoteHandler */
// profiler.inc
#define toProfiler(%1) view_as<Profiler>(%1)   /**< Приведение типа к Profiler */
// protobuf.inc
#define toProtobuf(%1) view_as<Protobuf>(%1)   /**< Приведение типа к Protobuf */
// regex.inc
#define toRegexError(%1) view_as<RegexError>(%1)   /**< Приведение типа к RegexError */
#define toRegex(%1) view_as<Regex>(%1)   /**< Приведение типа к Regex */
// sdkhooks.inc
#define toSDKHookType(%1) view_as<SDKHookType>(%1)   /**< Приведение типа к SDKHookType */
#define toUseType(%1) view_as<UseType>(%1)   /**< Приведение типа к UseType */
#define toSDKHookCB(%1) view_as<SDKHookCB>(%1)   /**< Приведение типа к SDKHookCB */
// sdktools.inc
#define toSDKCallType(%1) view_as<SDKCallType>(%1)   /**< Приведение типа к SDKCallType */
#define toSDKLibrary(%1) view_as<SDKLibrary>(%1)   /**< Приведение типа к SDKLibrary */
#define toSDKFuncConfSource(%1) view_as<SDKFuncConfSource>(%1)   /**< Приведение типа к SDKFuncConfSource */
#define toSDKType(%1) view_as<SDKType>(%1)   /**< Приведение типа к SDKType */
#define toSDKPassMethod(%1) view_as<SDKPassMethod>(%1)   /**< Приведение типа к SDKPassMethod */
// sdktools_entoutput.inc
#define toEntityOutput(%1) view_as<EntityOutput>(%1)   /**< Приведение типа к EntityOutput */
// sdktools_gamerules.inc
#define toRoundState(%1) view_as<RoundState>(%1)   /**< Приведение типа к RoundState */
// sdktools_sound.inc
#define toAmbientSHook(%1) view_as<AmbientSHook>(%1)   /**< Приведение типа к AmbientSHook */
#define toNormalSHook(%1) view_as<NormalSHook>(%1)   /**< Приведение типа к NormalSHook */
// sdktools_tempents.inc
#define toTEHook(%1) view_as<TEHook>(%1)   /**< Приведение типа к TEHook */
// sdktools_trace.inc
#define toRayType(%1) view_as<RayType>(%1)   /**< Приведение типа к RayType */
#define toTraceEntityFilter(%1) view_as<TraceEntityFilter>(%1)   /**< Приведение типа к TraceEntityFilter */
#define toTraceEntityEnumerator(%1) view_as<TraceEntityEnumerator>(%1)   /**< Приведение типа к TraceEntityEnumerator */
// sdktools_voice.inc
#define toListenOverride(%1) view_as<ListenOverride>(%1)   /**< Приведение типа к ListenOverride */
// socket.inc
#define toSocketType(%1) view_as<SocketType>(%1)   /**< Приведение типа к SocketType */
#define toSocketOption(%1) view_as<SocketOption>(%1)   /**< Приведение типа к SocketOption */
#define toSocketConnectCB(%1) view_as<SocketConnectCB>(%1)   /**< Приведение типа к SocketConnectCB */
#define toSocketIncomingCB(%1) view_as<SocketIncomingCB>(%1)   /**< Приведение типа к SocketIncomingCB */
#define toSocketReceiveCB(%1) view_as<SocketReceiveCB>(%1)   /**< Приведение типа к SocketReceiveCB */
#define toSocketSendqueueEmptyCB(%1) view_as<SocketSendqueueEmptyCB>(%1)   /**< Приведение типа к SocketSendqueueEmptyCB */
#define toSocketDisconnectCB(%1) view_as<SocketDisconnectCB>(%1)   /**< Приведение типа к SocketDisconnectCB */
#define toSocketErrorCB(%1) view_as<SocketErrorCB>(%1)   /**< Приведение типа к SocketErrorCB */
// sorting.inc
#define toSortOrder(%1) view_as<SortOrder>(%1)   /**< Приведение типа к SortOrder */
#define toSortType(%1) view_as<SortType>(%1)   /**< Приведение типа к SortType */
#define toSortFunc1D(%1) view_as<SortFunc1D>(%1)   /**< Приведение типа к SortFunc1D */
#define toSortFunc2D(%1) view_as<SortFunc2D>(%1)   /**< Приведение типа к SortFunc2D */
#define toSortFuncADTArray(%1) view_as<SortFuncADTArray>(%1)   /**< Приведение типа к SortFuncADTArray */
// sourcemod.inc
#define toAPLRes(%1) view_as<APLRes>(%1)   /**< Приведение типа к APLRes */
#define toGameData(%1) view_as<GameData>(%1)   /**< Приведение типа к GameData */
#define toFeatureType(%1) view_as<FeatureType>(%1)   /**< Приведение типа к FeatureType */
#define toFeatureStatus(%1) view_as<FeatureStatus>(%1)   /**< Приведение типа к FeatureStatus */
#define toNumberType(%1) view_as<NumberType>(%1)   /**< Приведение типа к NumberType */
#define toAddress(%1) view_as<Address>(%1)   /**< Приведение типа к Address */
#define toFrameIterator(%1) view_as<FrameIterator>(%1)   /**< Приведение типа к FrameIterator */
// textparse.inc
#define toSMCResult(%1) view_as<SMCResult>(%1)   /**< Приведение типа к SMCResult */
#define toSMCError(%1) view_as<SMCError>(%1)   /**< Приведение типа к SMCError */
#define toSMC_ParseStart(%1) view_as<SMC_ParseStart>(%1)   /**< Приведение типа к SMC_ParseStart */
#define toSMC_NewSection(%1) view_as<SMC_NewSection>(%1)   /**< Приведение типа к SMC_NewSection */
#define toSMC_KeyValue(%1) view_as<SMC_KeyValue>(%1)   /**< Приведение типа к SMC_KeyValue */
#define toSMC_EndSection(%1) view_as<SMC_EndSection>(%1)   /**< Приведение типа к SMC_EndSection */
#define toSMC_ParseEnd(%1) view_as<SMC_ParseEnd>(%1)   /**< Приведение типа к SMC_ParseEnd */
#define toSMC_RawLine(%1) view_as<SMC_RawLine>(%1)   /**< Приведение типа к SMC_RawLine */
#define toSMCParser(%1) view_as<SMCParser>(%1)   /**< Приведение типа к SMCParser */
// tf2.inc
#define toTFClassType(%1) view_as<TFClassType>(%1)   /**< Приведение типа к TFClassType */
#define toTFTeam(%1) view_as<TFTeam>(%1)   /**< Приведение типа к TFTeam */
#define toTFCond(%1) view_as<TFCond>(%1)   /**< Приведение типа к TFCond */
#define toTFHoliday(%1) view_as<TFHoliday>(%1)   /**< Приведение типа к TFHoliday */
#define toTFObjectType(%1) view_as<TFObjectType>(%1)   /**< Приведение типа к TFObjectType */
#define toTFObjectMode(%1) view_as<TFObjectMode>(%1)   /**< Приведение типа к TFObjectMode */
// tf2_stocks.inc
#define toTFResourceType(%1) view_as<TFResourceType>(%1)   /**< Приведение типа к TFResourceType */
// timers.inc
#define toTimer(%1) view_as<Timer>(%1)   /**< Приведение типа к Timer */
// topmenus.inc
#define toTopMenuAction(%1) view_as<TopMenuAction>(%1)   /**< Приведение типа к TopMenuAction */
#define toTopMenuObjectType(%1) view_as<TopMenuObjectType>(%1)   /**< Приведение типа к TopMenuObjectType */
#define toTopMenuPosition(%1) view_as<TopMenuPosition>(%1)   /**< Приведение типа к TopMenuPosition */
#define toTopMenuObject(%1) view_as<TopMenuObject>(%1)   /**< Приведение типа к TopMenuObject */
#define toTopMenuHandler(%1) view_as<TopMenuHandler>(%1)   /**< Приведение типа к TopMenuHandler */
#define toTopMenu(%1) view_as<TopMenu>(%1)   /**< Приведение типа к TopMenu */
// usermessages.inc
#define toUserMsg(%1) view_as<UserMsg>(%1)   /**< Приведение типа к UserMsg */
#define toUserMessageType(%1) view_as<UserMessageType>(%1)   /**< Приведение типа к UserMessageType */
#define toMsgHook(%1) view_as<MsgHook>(%1)   /**< Приведение типа к MsgHook */
#define toMsgPostHook(%1) view_as<MsgPostHook>(%1)   /**< Приведение типа к MsgPostHook */


/**
 * Присваивает true переменной
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (0-31)
 */
#define bTRUE(%1,%2) view_as<int>(%1) |= 1 << %2

/**
 * Присваивает false переменной
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (0-31)
 */
#define bFALSE(%1,%2) view_as<int>(%1) &= ~(1 << %2)

/**
 * Получение значения переменной
 * Для получения 1 при true, необходимо использовать !! перед bGET()
 * 
 * @param %1        Имя переменной
 * @param %2        Позиция (0-31)
 * 
 * @return          true или false
 */
#define bGET(%1,%2) (view_as<int>(%1) & 1 << %2)


/**
 * Использование массива как буфер (имя переменной и размер)
 * 
 * @param %1        Имя переменной
 */
#define sz(%1) %1, sizeof(%1)


/**
 * Создание многомерного массива (2-6)
 * 
 * @param %1        Имя переменной
 * @param %2        Префикс для размерности в #define
 *                  Пример:
 *                      #define SIZE2_1 2
 *                      #define SIZE2_2 32
 * 
 *                      char ARR2_CREATE(arr2, SIZE2);
 */
#define ARR2_CREATE(%1,%2) %1[%2_1 * %2_2]
#define ARR3_CREATE(%1,%2) %1[%2_1 * %2_2 * %2_3]
#define ARR4_CREATE(%1,%2) %1[%2_1 * %2_2 * %2_3 * %2_4]
#define ARR5_CREATE(%1,%2) %1[%2_1 * %2_2 * %2_3 * %2_4 * %2_5]
#define ARR6_CREATE(%1,%2) %1[%2_1 * %2_2 * %2_3 * %2_4 * %2_5 * %2_6]

/**
 * Использование многомерного массива как буфер (имя переменной и размер)
 * 
 * @param %1        Имя переменной
 * @param %2        Префикс для размерности в #define
 * ...              Индексы
 *                  Пример:
 *                      #define SIZE3_1 2
 *                      #define SIZE3_2 2
 *                      #define SIZE3_3 32
 * 
 *                      char ARR3_CREATE(arr3, SIZE3);
 *                      FormatEx(ARR3_WRITE(arr3, SIZE3, 0, 0, 0), "test3");
 */
#define ARR2_WRITE(%1,%2,%3,%4) %1[%3 * %2_2 \
    + %4], %2_2
#define ARR3_WRITE(%1,%2,%3,%4,%5) %1[%2_1 * %2_2 * %2_3 / (%2_1 - %3) - \
    %2_2 * %2_3 / (%2_2 - %4) \
    + %5], %2_3
#define ARR4_WRITE(%1,%2,%3,%4,%5,%6) %1[%2_1 * %2_2 * %2_3 * %2_4 / (%2_1 - %3) - \
    %2_2 * %2_3 * %2_4 / (%2_2 - %4) - \
    %2_3 * %2_4 / (%2_3 - %5) \
    + %6], %2_4
#define ARR5_WRITE(%1,%2,%3,%4,%5,%6,%7) %1[%2_1 * %2_2 * %2_3 * %2_4 * %2_5 / (%2_1 - %3) - \
    %2_2 * %2_3 * %2_4 * %2_5 / (%2_2 - %4) - \
    %2_3 * %2_4 * %2_5 / (%2_3 - %5) - \
    %2_4 * %2_5 / (%2_4 - %6) \
    + %7], %2_5
#define ARR6_WRITE(%1,%2,%3,%4,%5,%6,%7,%8) %1[%2_1 * %2_2 * %2_3 * %2_4 * %2_5 * %2_6 / (%2_1 - %3) - \
    %2_2 * %2_3 * %2_4 * %2_5 * %2_6 / (%2_2 - %4) - \
    %2_3 * %2_4 * %2_5 * %2_6 / (%2_3 - %5) - \
    %2_4 * %2_5 * %2_6 / (%2_4 - %6) - \
    %2_5 * %2_6 / (%2_5 - %7) \
    + %8], %2_6

/**
 * Позиция многомерного массива для чтения или записи
 * 
 * @param %1        Имя переменной
 * @param %2        Префикс для размерности в #define
 * ...              Индексы
 *                  Пример:
 *                      #define SIZE3_1 2
 *                      #define SIZE3_2 2
 *                      #define SIZE3_3 32
 * 
 *                      char ARR3_CREATE(arr3, SIZE3);
 *                      FormatEx(ARR3_WRITE(arr3, SIZE3, 0, 0, 0), "test3");
 *                      PrintToServer("%s", ARR3_POS(arr3, SIZE3, 0, 0, 0));
 */
#define ARR2_POS(%1,%2,%3,%4) %1[%3 * %2_2 \
    + %4]
#define ARR3_POS(%1,%2,%3,%4,%5) %1[%2_1 * %2_2 * %2_3 / (%2_1 - %3) - \
    %2_2 * %2_3 / (%2_2 - %4) \
    + %5]
#define ARR4_POS(%1,%2,%3,%4,%5,%6) %1[%2_1 * %2_2 * %2_3 * %2_4 / (%2_1 - %3) - \
    %2_2 * %2_3 * %2_4 / (%2_2 - %4) - \
    %2_3 * %2_4 / (%2_3 - %5) \
    + %6]
#define ARR5_POS(%1,%2,%3,%4,%5,%6,%7) %1[%2_1 * %2_2 * %2_3 * %2_4 * %2_5 / (%2_1 - %3) - \
    %2_2 * %2_3 * %2_4 * %2_5 / (%2_2 - %4) - \
    %2_3 * %2_4 * %2_5 / (%2_3 - %5) - \
    %2_4 * %2_5 / (%2_4 - %6) \
    + %7]
#define ARR6_POS(%1,%2,%3,%4,%5,%6,%7,%8) %1[%2_1 * %2_2 * %2_3 * %2_4 * %2_5 * %2_6 / (%2_1 - %3) - \
    %2_2 * %2_3 * %2_4 * %2_5 * %2_6 / (%2_2 - %4) - \
    %2_3 * %2_4 * %2_5 * %2_6 / (%2_3 - %5) - \
    %2_4 * %2_5 * %2_6 / (%2_4 - %6) - \
    %2_5 * %2_6 / (%2_5 - %7) \
    + %8]


#if defined SPCOMP_MOD
// Токены (стабильно работает только в spcomp_mod)
#define elseif else if
#define elif else if
#endif
