<template>
  <div class="backdrop" @click.self="closeModal">
    <div class="modal" :class="{ sale: theme === 'sale' }">
      <slot></slot>
    </div>
  </div>
</template>

<script>

export default {
  props: ['theme'],
  methods: {
    closeModal() {
      this.$emit('close')

    }
  }
}
</script>

<style scoped>
.modal {
  width: 400px ;
  padding: 20px ;
  margin: 100px ;
  background: white ;
  border-radius: 10px ;
  text-align: center;
  position: fixed;
}
.backdrop {
  top: 0 ;
  position: fixed;
  background: rgba(0,0,0,0.5);
  width: 100% ;
  height: 100% ;
}
.modal h1 {
  color: #03cfb4;
  border: none;
  padding: 0 ;
  position: fixed;
}
.modal p {
  font-style: normal;
}
</style>
