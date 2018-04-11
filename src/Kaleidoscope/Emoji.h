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
  EMOJI_JOYFUL = EMOJI_FIRST,
  EMOJI_SMILE,
  EMOJI_WINK,
  EMOJI_BLUSH,
  EMOJI_CONFIDENT,
  EMOJI_FLIRTY,
  EMOJI_THINKING,
  EMOJI_DISBELIEF,
  EMOJI_MISCHIEVOUS,
  EMOJI_UPSIDE_DOWN,
  EMOJI_ANNOYED,
  EMOJI_EXPLODING_HEAD,
  EMOJI_GRIMACED,
  EMOJI_FLUSHED,
  EMOJI_CRAZY,
  EMOJI_ILL,
  EMOJI_VOMITING,
  EMOJI_NERD,
  EMOJI_CROSSBONES,
  EMOJI_MAN_DANCING,
  EMOJI_VULCAN,
  EMOJI_METAL,
  EMOJI_THUMBSUP,
  EMOJI_THUMBSDOWN,
  EMOJI_WAVE,
  EMOJI_EYES,
  EMOJI_HEART,
  EMOJI_BOOM,
  EMOJI_HOLE,
  EMOJI_UNICORN_FACE,
  EMOJI_SNAIL,
  EMOJI_CRICKET,
  EMOJI_SUNFLOWER,
  EMOJI_PEACH,
  EMOJI_CONSTRUCTION,
  EMOJI_ROCKET,
  EMOJI_HOURGLASS_FLOWING,
  EMOJI_SPARKLES,
  EMOJI_BALLOON,
  EMOJI_PARTY,
  EMOJI_GIFT,
  EMOJI_MOBILE,
  EMOJI_KEYBOARD,
  EMOJI_ENVELOPE,
  EMOJI_SHOPPING_CART,
  EMOJI_WARNING,
  EMOJI_WHITE_CHECK_MARK,
  EMOJI_CROSS_MARK,
  EMOJI_LAST = EMOJI_CROSS_MARK
};


#define Key_EmojiJoyful (Key){ .raw = EMOJI_JOYFUL } // 😂 (0x1F602) face with tears of joy
#define Key_EmojiSmile (Key){ .raw = EMOJI_SMILE } // 😃 (0x1F603) grinning face with big eyes
#define Key_EmojiWink (Key){ .raw = EMOJI_WINK } // 😉 (0x1F609) winking face
#define Key_EmojiBlush (Key){ .raw = EMOJI_BLUSH } // 😊 (0x1F60A) smiling face with smiling eyes
#define Key_EmojiConfident (Key){ .raw = EMOJI_CONFIDENT } // 😎 (0x1F60E) smiling face with sunglasses
#define Key_EmojiFlirty (Key){ .raw = EMOJI_FLIRTY } // 😘 (0x1F618) face blowing a kiss
#define Key_EmojiThinking (Key){ .raw = EMOJI_THINKING } // 🤔 (0x1F914) thinking face
#define Key_EmojiDisbelief (Key){ .raw = EMOJI_DISBELIEF } // 🙄 (0x1F644) face with rolling eyes
#define Key_EmojiMischievous (Key){ .raw = EMOJI_MISCHIEVOUS } // 😜 (0x1F61C) winking face with tongue
#define Key_EmojiUpsideDown (Key){ .raw = EMOJI_UPSIDE_DOWN } // 🙃 (0x1F643) upside-down face
#define Key_EmojiAnnoyed (Key){ .raw = EMOJI_ANNOYED } // 😤 (0x1F624) face with steam from nose
#define Key_EmojiExplodingHead (Key){ .raw = EMOJI_EXPLODING_HEAD } // 🤯 (0x1F92F) exploding head
#define Key_EmojiGrimaced (Key){ .raw = EMOJI_GRIMACED } // 😬 (0x1F62C) grimacing face
#define Key_EmojiFlushed (Key){ .raw = EMOJI_FLUSHED } // 😳 (0x1F633) flushed face
#define Key_EmojiCrazy (Key){ .raw = EMOJI_CRAZY } // 🤪 (0x1F92A) zany face
#define Key_EmojiIll (Key){ .raw = EMOJI_ILL } // 😷 (0x1F637) face with medical mask
#define Key_EmojiVomiting (Key){ .raw = EMOJI_VOMITING } // 🤮 (0x1F92E) face vomiting
#define Key_EmojiNerd (Key){ .raw = EMOJI_NERD } // 🤓 (0x1F913) nerd face
#define Key_EmojiCrossbones (Key){ .raw = EMOJI_CROSSBONES } // ☠️ (0x2620) skull and crossbones
#define Key_EmojiManDancing (Key){ .raw = EMOJI_MAN_DANCING } // 🕺 (0x1F57A) man dancing
#define Key_EmojiVulcan (Key){ .raw = EMOJI_VULCAN } // 🖖 (0x1F596) vulcan salute
#define Key_EmojiMetal (Key){ .raw = EMOJI_METAL } // 🤘 (0x1F918) sign of the horns
#define Key_EmojiThumbsup (Key){ .raw = EMOJI_THUMBSUP } // 👍️ (0x1F44D) thumbs up
#define Key_EmojiThumbsdown (Key){ .raw = EMOJI_THUMBSDOWN } // 👎️ (0x1F44E) thumbs down
#define Key_EmojiWave (Key){ .raw = EMOJI_WAVE } // 👋 (0x1F44B) waving hand
#define Key_EmojiEyes (Key){ .raw = EMOJI_EYES } // 👀 (0x1F440) eyes
#define Key_EmojiHeart (Key){ .raw = EMOJI_HEART } // ❤️ (0x2764) red heart
#define Key_EmojiBoom (Key){ .raw = EMOJI_BOOM } // 💥 (0x1F4A5) collision
#define Key_EmojiHole (Key){ .raw = EMOJI_HOLE } // 🕳️ (0x1F573) hole
#define Key_EmojiUnicornFace (Key){ .raw = EMOJI_UNICORN_FACE } // 🦄 (0x1F984) unicorn face
#define Key_EmojiSnail (Key){ .raw = EMOJI_SNAIL } // 🐌 (0x1F40C) snail
#define Key_EmojiCricket (Key){ .raw = EMOJI_CRICKET } // 🦗 (0x1F997) cricket
#define Key_EmojiSunflower (Key){ .raw = EMOJI_SUNFLOWER } // 🌻 (0x1F33B) sunflower
#define Key_EmojiPeach (Key){ .raw = EMOJI_PEACH } // 🍑 (0x1F351) peach
#define Key_EmojiConstruction (Key){ .raw = EMOJI_CONSTRUCTION } // 🚧 (0x1F6A7) construction
#define Key_EmojiRocket (Key){ .raw = EMOJI_ROCKET } // 🚀 (0x1F680) rocket
#define Key_EmojiHourglassFlowing (Key){ .raw = EMOJI_HOURGLASS_FLOWING } // ⏳️ (0x23F3) hourglass not done
#define Key_EmojiSparkles (Key){ .raw = EMOJI_SPARKLES } // ✨ (0x2728) sparkles
#define Key_EmojiBalloon (Key){ .raw = EMOJI_BALLOON } // 🎈 (0x1F388) balloon
#define Key_EmojiParty (Key){ .raw = EMOJI_PARTY } // 🎉 (0x1F389) party popper
#define Key_EmojiGift (Key){ .raw = EMOJI_GIFT } // 🎁 (0x1F381) wrapped gift
#define Key_EmojiMobile (Key){ .raw = EMOJI_MOBILE } // 📱 (0x1F4F1) mobile phone
#define Key_EmojiKeyboard (Key){ .raw = EMOJI_KEYBOARD } // ⌨️ (0x2328) keyboard
#define Key_EmojiEnvelope (Key){ .raw = EMOJI_ENVELOPE } // ✉️ (0x2709) envelope
#define Key_EmojiShoppingCart (Key){ .raw = EMOJI_SHOPPING_CART } // 🛒 (0x1F6D2) shopping cart
#define Key_EmojiWarning (Key){ .raw = EMOJI_WARNING } // ⚠️ (0x26A0) warning
#define Key_EmojiWhiteCheckMark (Key){ .raw = EMOJI_WHITE_CHECK_MARK } // ✅ (0x2705) white heavy check mark
#define Key_EmojiCrossMark (Key){ .raw = EMOJI_CROSS_MARK } // ❌ (0x274C) cross mark


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
