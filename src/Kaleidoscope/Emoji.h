/* -*- mode: c++ -*-
 * Kaleidoscope-Emoji -- Emoji Keys.
 *
 * Copyright (c) 2018 Jochen Pfeiffer
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
.* in the Software without restriction, including without limitation the rights
.* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
.* copies of the Software, and to permit persons to whom the Software is
.* furnished to do so, subject to the following conditions:
.*
.* The above copyright notice and this permission notice shall be included in all
.* copies or substantial portions of the Software.
.*
.* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
.* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
.* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
.* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
.* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
.* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
.* SOFTWARE.
 */

#pragma once

#include <Kaleidoscope.h>
#include <Kaleidoscope-Ranges.h>

enum {
  EMOJI_FIRST = kaleidoscope::ranges::KALEIDOSCOPE_SAFE_START,
  EMOJI_JOYFUL = EMOJI_FIRST, // 😂 (0x1F602) face with tears of joy
  EMOJI_SMILE, // 😃 (0x1F603) grinning face with big eyes
  EMOJI_WINK, // 😉 (0x1F609) winking face
  EMOJI_BLUSH, // 😊 (0x1F60A) smiling face with smiling eyes
  EMOJI_CONFIDENT, // 😎 (0x1F60E) smiling face with sunglasses
  EMOJI_FLIRTY, // 😘 (0x1F618) face blowing a kiss
  EMOJI_DISBELIEF, // 🙄 (0x1F644) face with rolling eyes
  EMOJI_MISCHIEVOUS, // 😜 (0x1F61C) winking face with tongue
  EMOJI_UPSIDE_DOWN, // 🙃 (0x1F643) upside-down face
  EMOJI_ANNOYED, // 😤 (0x1F624) face with steam from nose
  EMOJI_EXPLODING_HEAD, // 🤯 (0x1F92F) exploding head
  EMOJI_GRIMACED, // 😬 (0x1F62C) grimacing face
  EMOJI_FLUSHED, // 😳 (0x1F633) flushed face
  EMOJI_CRAZY, // 🤪 (0x1F92A) zany face
  EMOJI_ILL, // 😷 (0x1F637) face with medical mask
  EMOJI_VOMITING, // 🤮 (0x1F92E) face vomiting
  EMOJI_NERD, // 🤓 (0x1F913) nerd face
  EMOJI_CROSSBONES, // ☠️ (0x2620) skull and crossbones
  EMOJI_MAN_DANCING, // 🕺 (0x1F57A) man dancing
  EMOJI_VULCAN, // 🖖 (0x1F596) vulcan salute
  EMOJI_METAL, // 🤘 (0x1F918) sign of the horns
  EMOJI_WAVE, // 👋 (0x1F44B) waving hand
  EMOJI_EYES, // 👀 (0x1F440) eyes
  EMOJI_HEART, // ❤️ (0x2764) red heart
  EMOJI_BOOM, // 💥 (0x1F4A5) collision
  EMOJI_UNICORN_FACE, // 🦄 (0x1F984) unicorn face
  EMOJI_SNAIL, // 🐌 (0x1F40C) snail
  EMOJI_CRICKET, // 🦗 (0x1F997) cricket
  EMOJI_SUNFLOWER, // 🌻 (0x1F33B) sunflower
  EMOJI_PEACH, // 🍑 (0x1F351) peach
  EMOJI_CONSTRUCTION, // 🚧 (0x1F6A7) construction
  EMOJI_ROCKET, // 🚀 (0x1F680) rocket
  EMOJI_SPARKLES, // ✨ (0x2728) sparkles
  EMOJI_BALLOON, // 🎈 (0x1F388) balloon
  EMOJI_PARTY, // 🎉 (0x1F389) party popper
  EMOJI_GIFT, // 🎁 (0x1F381) wrapped gift
  EMOJI_MOBILE, // 📱 (0x1F4F1) mobile phone
  EMOJI_KEYBOARD, // ⌨️ (0x2328) keyboard
  EMOJI_ENVELOPE, // ✉️ (0x2709) envelope
  EMOJI_SHOPPING_CART, // 🛒 (0x1F6D2) shopping cart
  EMOJI_WARNING, // ⚠️ (0x26A0) warning
  EMOJI_WHITE_CHECK_MARK, // ✅ (0x2705) white heavy check mark
  EMOJI_CROSS_MARK, // ❌ (0x274C) cross mark
  EMOJI_LAST = EMOJI_CROSS_MARK
};


#define Key_Joyful (Key){ .raw = EMOJI_JOYFUL }
#define Key_Smile (Key){ .raw = EMOJI_SMILE }
#define Key_Wink (Key){ .raw = EMOJI_WINK }
#define Key_Blush (Key){ .raw = EMOJI_BLUSH }
#define Key_Confident (Key){ .raw = EMOJI_CONFIDENT }
#define Key_Flirty (Key){ .raw = EMOJI_FLIRTY }
#define Key_Disbelief (Key){ .raw = EMOJI_DISBELIEF }
#define Key_Mischievous (Key){ .raw = EMOJI_MISCHIEVOUS }
#define Key_UpsideDown (Key){ .raw = EMOJI_UPSIDE_DOWN }
#define Key_Annoyed (Key){ .raw = EMOJI_ANNOYED }
#define Key_ExplodingHead (Key){ .raw = EMOJI_EXPLODING_HEAD }
#define Key_Grimaced (Key){ .raw = EMOJI_GRIMACED }
#define Key_Flushed (Key){ .raw = EMOJI_FLUSHED }
#define Key_Crazy (Key){ .raw = EMOJI_CRAZY }
#define Key_Ill (Key){ .raw = EMOJI_ILL }
#define Key_Vomiting (Key){ .raw = EMOJI_VOMITING }
#define Key_Nerd (Key){ .raw = EMOJI_NERD }
#define Key_Crossbones (Key){ .raw = EMOJI_CROSSBONES }
#define Key_ManDancing (Key){ .raw = EMOJI_MAN_DANCING }
#define Key_Vulcan (Key){ .raw = EMOJI_VULCAN }
#define Key_Metal (Key){ .raw = EMOJI_METAL }
#define Key_Wave (Key){ .raw = EMOJI_WAVE }
#define Key_Eyes (Key){ .raw = EMOJI_EYES }
#define Key_Heart (Key){ .raw = EMOJI_HEART }
#define Key_Boom (Key){ .raw = EMOJI_BOOM }
#define Key_UnicornFace (Key){ .raw = EMOJI_UNICORN_FACE }
#define Key_Snail (Key){ .raw = EMOJI_SNAIL }
#define Key_Cricket (Key){ .raw = EMOJI_CRICKET }
#define Key_Sunflower (Key){ .raw = EMOJI_SUNFLOWER }
#define Key_Peach (Key){ .raw = EMOJI_PEACH }
#define Key_Construction (Key){ .raw = EMOJI_CONSTRUCTION }
#define Key_Rocket (Key){ .raw = EMOJI_ROCKET }
#define Key_Sparkles (Key){ .raw = EMOJI_SPARKLES }
#define Key_Balloon (Key){ .raw = EMOJI_BALLOON }
#define Key_Party (Key){ .raw = EMOJI_PARTY }
#define Key_Gift (Key){ .raw = EMOJI_GIFT }
#define Key_Mobile (Key){ .raw = EMOJI_MOBILE }
#define Key_Keyboard (Key){ .raw = EMOJI_KEYBOARD }
#define Key_Envelope (Key){ .raw = EMOJI_ENVELOPE }
#define Key_ShoppingCart (Key){ .raw = EMOJI_SHOPPING_CART }
#define Key_Warning (Key){ .raw = EMOJI_WARNING }
#define Key_WhiteCheckMark (Key){ .raw = EMOJI_WHITE_CHECK_MARK }
#define Key_CrossMark (Key){ .raw = EMOJI_CROSS_MARK }


namespace kaleidoscope {

class Emoji : public KaleidoscopePlugin {
 public:
  Emoji(void);

  void begin(void) final;

 private:
  static Key eventHandlerHook(Key mapped_key, byte row, byte col, uint8_t key_state);

  typedef struct EmojiUnicode_ {
    EmojiUnicode_() : character(0), variation(0) {}
    EmojiUnicode_(uint32_t c) : character(c), variation(0) {}
    EmojiUnicode_(uint32_t c, uint32_t v) : character(c), variation(v) {}
    // todo: use uint32_t *characters;
    uint32_t character;
    uint32_t variation;
  } EmojiUnicode;

  static EmojiUnicode emojiForKey(Key key);
  static void typeEmoji(EmojiUnicode emoji);
};

}

extern kaleidoscope::Emoji Emoji;
