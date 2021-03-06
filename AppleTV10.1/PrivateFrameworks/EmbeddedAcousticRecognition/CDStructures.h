//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BasicTextSanitizer {
    CDUnknownFunctionPointerType *_vptr$TextSanitizer;
    struct shared_ptr<quasar::URegularExpressionWrapper> mUnicodeOutliers;
    struct shared_ptr<quasar::URegularExpressionWrapper> mSpecialChars;
    struct shared_ptr<quasar::URegularExpressionWrapper> mDupSpacePattern;
    struct shared_ptr<quasar::URegularExpressionWrapper> mCtrlCharsPattern;
    int state;
    struct unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> UTF8_MAP;
    struct unordered_map<char32_t, char32_t, std::__1::hash<char32_t>, std::__1::equal_to<char32_t>, std::__1::allocator<std::__1::pair<const char32_t, char32_t>>> unicode_map;
};

struct CommandTagger;

struct CommandTagging {
    struct map<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>>> _field1;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field2;
    basic_string_805fe43b _field3;
};

struct EARCSpeechRecognitionResultStream {
    void *ctx;
    CDUnknownFunctionPointerType DisposeContext;
    CDUnknownFunctionPointerType DidRecognizePartialResultTokens;
    CDUnknownFunctionPointerType DidFinishRecognitionWithError;
    CDUnknownFunctionPointerType DidRecognizeFinalResults;
};

struct G2P;

struct LmeData;

struct LmeDataFactory;

struct PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>;

struct RecogAudioBufferBase;

struct RecogResultStreamBase;

struct ResultCombiner;

struct SdapiTokenizer;

struct SpeechITN;

struct SpeechModelInfo {
    basic_string_805fe43b version;
    struct set<int, std::__1::less<int>, std::__1::allocator<int>> samplingRates;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> tasks;
    basic_string_805fe43b language;
    basic_string_805fe43b phoneSetVersion;
    basic_string_805fe43b acousticProfileVersion;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> aceToQuasarTemplate;
    struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>>> quasarTemplateToAce;
    struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> quasarTemplateToEnumerationType;
    int g2pModelVersion;
};

struct SpeechRecognizer;

struct SpeechRequestData;

struct SymbolTableList;

struct Token {
    basic_string_805fe43b tokenName;
    unsigned int startMilliseconds;
    unsigned int endMilliseconds;
    unsigned int silStartMilliSeconds;
    float confidence;
    _Bool hasSpaceAfter;
    _Bool hasSpaceBefore;
    basic_string_805fe43b phoneSeq;
};

struct URegularExpressionWrapper;

struct __hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>;

struct __hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>;

struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>;

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __first_;
    } __r_;
};

struct map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word>>>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct pair<id<_EARLanguageModelDataSource>, float>;

struct set<int, std::__1::less<int>, std::__1::allocator<int>> {
    struct __tree<int, std::__1::less<int>, std::__1::allocator<int>> {
        struct __tree_node<int, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<int, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::less<int>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct __tree<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> {
        struct __tree_node<std::__1::basic_string<char>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::basic_string<char>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::less<std::__1::basic_string<char>>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct shared_ptr<SpeechITN> {
    struct SpeechITN *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<quasar::LmeDataFactory> {
    struct LmeDataFactory *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<quasar::PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>>> {
    struct PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<quasar::RecogAudioBufferBase> {
    struct RecogAudioBufferBase *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<quasar::RecogResultStreamBase> {
    struct RecogResultStreamBase *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<quasar::SpeechRequestData> {
    struct SpeechRequestData *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<quasar::SymbolTableList> {
    struct SymbolTableList *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<quasar::URegularExpressionWrapper> {
    struct URegularExpressionWrapper *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<quasar::CommandTagger, std::__1::default_delete<quasar::CommandTagger>> {
    struct __compressed_pair<quasar::CommandTagger *, std::__1::default_delete<quasar::CommandTagger>> {
        struct CommandTagger *__first_;
    } __ptr_;
};

struct unique_ptr<quasar::CommandTagging, std::__1::default_delete<quasar::CommandTagging>> {
    struct __compressed_pair<quasar::CommandTagging *, std::__1::default_delete<quasar::CommandTagging>> {
        struct CommandTagging *__first_;
    } __ptr_;
};

struct unique_ptr<quasar::G2P, std::__1::default_delete<quasar::G2P>> {
    struct __compressed_pair<quasar::G2P *, std::__1::default_delete<quasar::G2P>> {
        struct G2P *__first_;
    } __ptr_;
};

struct unique_ptr<quasar::LmeData, std::__1::default_delete<quasar::LmeData>> {
    struct __compressed_pair<quasar::LmeData *, std::__1::default_delete<quasar::LmeData>> {
        struct LmeData *__first_;
    } __ptr_;
};

struct unique_ptr<quasar::ResultCombiner, std::__1::default_delete<quasar::ResultCombiner>> {
    struct __compressed_pair<quasar::ResultCombiner *, std::__1::default_delete<quasar::ResultCombiner>> {
        struct ResultCombiner *__first_;
    } __ptr_;
};

struct unique_ptr<quasar::SpeechRecognizer, std::__1::default_delete<quasar::SpeechRecognizer>> {
    struct __compressed_pair<quasar::SpeechRecognizer *, std::__1::default_delete<quasar::SpeechRecognizer>> {
        struct SpeechRecognizer *__first_;
    } __ptr_;
};

struct unique_ptr<sdapi::SdapiTokenizer, std::__1::default_delete<sdapi::SdapiTokenizer>> {
    struct __compressed_pair<sdapi::SdapiTokenizer *, std::__1::default_delete<sdapi::SdapiTokenizer>> {
        struct SdapiTokenizer *__first_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<char32_t, char32_t, std::__1::hash<char32_t>, std::__1::equal_to<char32_t>, std::__1::allocator<std::__1::pair<const char32_t, char32_t>>> {
    struct __hash_table<std::__1::__hash_value_type<char32_t, char32_t>, std::__1::__unordered_map_hasher<char32_t, std::__1::__hash_value_type<char32_t, char32_t>, std::__1::hash<char32_t>, true>, std::__1::__unordered_map_equal<char32_t, std::__1::__hash_value_type<char32_t, char32_t>, std::__1::equal_to<char32_t>, true>, std::__1::allocator<std::__1::__hash_value_type<char32_t, char32_t>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<char32_t, std::__1::__hash_value_type<char32_t, char32_t>, std::__1::hash<char32_t>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<char32_t, std::__1::__hash_value_type<char32_t, char32_t>, std::__1::equal_to<char32_t>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<int, unsigned int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, unsigned int>>> {
    struct __hash_table<std::__1::__hash_value_type<int, unsigned int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned int>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned int>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<int, unsigned int>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::hash<int>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned int>, std::__1::equal_to<int>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
    struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::hash<std::__1::basic_string<char>>, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::hash<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<quasar::Token, std::__1::allocator<quasar::Token>> {
    struct Token *__begin_;
    struct Token *__end_;
    struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token>> {
        struct Token *__first_;
    } __end_cap_;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    basic_string_805fe43b *_field1;
    basic_string_805fe43b *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        basic_string_805fe43b *_field1;
    } _field3;
};

struct vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float>>> {
    struct pair<id<_EARLanguageModelDataSource>, float> *__begin_;
    struct pair<id<_EARLanguageModelDataSource>, float> *__end_;
    struct __compressed_pair<std::__1::pair<id<_EARLanguageModelDataSource>, float>*, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float>>> {
        struct pair<id<_EARLanguageModelDataSource>, float> *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __first_;
    } __r_;
} basic_string_805fe43b;

typedef struct shared_ptr<quasar::RecogAudioBufferBase> {
    struct RecogAudioBufferBase *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_809f9c31;

typedef struct shared_ptr<quasar::RecogResultStreamBase> {
    struct RecogResultStreamBase *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5cb47a18;

typedef struct shared_ptr<quasar::SpeechRequestData> {
    struct SpeechRequestData *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_9f04d411;

typedef struct shared_ptr<quasar::SymbolTableList> {
    struct SymbolTableList *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_ca83464d;

typedef struct vector<quasar::Token, std::__1::allocator<quasar::Token>> {
    struct Token *__begin_;
    struct Token *__end_;
    struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token>> {
        struct Token *__first_;
    } __end_cap_;
} vector_ec3bbdac;

